#include<cstdlib>
#include <iostream>
#include "ward.h"

#define _DEBUG
using namespace std;

Ward::Ward(string name, int n){

    #ifdef _DEBUG
    cout<<"Created ward"<<endl;
    #endif
    if ((name=="")||(n<=0)){

        cout<<"Invalid input data"<<endl;
        system("pause");
    }

    else {
    name_ = name;
    totalBeds_=n;
    ocupiedBeds_=0;
    }
}

Ward::~Ward(){
    #ifdef _DEBUG
    cout<<"Deleted ward"<<endl;
    #endif // _DEBUG
}

bool Ward::setName(string x){
     if (x=="")
    {
        return false;
    }
    else
    {
        name_= x;
        return true;
    }
}

bool Ward::setTotal(int n){
     if (n<=0){
    return false;
    }
    else
        totalBeds_ = n;
        return true;
}
string Ward::getName() const{
        return name_;
}
int Ward::getTotal() const{
     return totalBeds_;
}
int Ward::getFree() const{
     return ocupiedBeds_;
}


Ward& Ward::operator + (Patient &p){
    if(ocupiedBeds_<totalBeds_){
        wardPatients_.push_back(&p);
       ocupiedBeds_++;
    }
    else{
        cout<<"No more free beds"<<endl;
    }
    return *this;
}

bool Ward::operator!=(const Ward &p)const
{
    bool l = 0;
    if(name_!=p.name_)
        l =1;
    if(totalBeds_!=p.totalBeds_)
        l =1;
    return l;
}

Ward& Ward::operator=(const Ward &p)
{
    name_ = p.name_;
    totalBeds_ = p.totalBeds_;
    return *this;
}

Patient&  Ward::getPatient(int i)const{

  return *wardPatients_[i];
 }
