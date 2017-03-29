#include <iostream>
#include "patient.h"


#define _DEBUG
using namespace std;

Patient::Patient(string n, string w, int x)
{
    #ifdef _DEBUG
    cout<<"Created patient"<<endl;
    #endif // _DEBUG
    name_    = n;
    surname_=w;
    numberDiseases_=x;

}

Patient::~Patient()
{
    #ifdef _DEBUG
    cout<<"Deleted patient"<<endl;
    #endif // _DEBUG

}


bool Patient::setName(string n)
{
    if (n=="")
    {
        return false;
    }
    else
    {
        Patient::name_ = n;
        return true;
    }
}

bool Patient::setSurname(string w)
{
    if (w=="")
    {
        return false;
    }
    else
    {
        Patient::surname_ = w;
        return true;
    }
}

int Patient::getNrDiseases (){
return numberDiseases_;

}

string Patient::getName()const
{
    return Patient::name_;
}

string Patient::getSurname()const
{
    return Patient::surname_;
}

Patient& Patient::operator + (Disease &d){

        Patient::patientDiseases_.push_back(&d);
        Patient::numberDiseases_++;

    return *this;
}

Disease& Patient::getDiseases(int i)const
{

       return *Patient::patientDiseases_[i];

}

bool Patient::operator!=(const Patient &p)const
{
    bool l = 0;
    if(name_!=p.name_)
        l =1;
    if(surname_!=p.surname_)
        l =1;
    return l;
}

Patient& Patient::operator=(const Patient &p)
{
    name_ = p.name_;
    surname_ = p.surname_;
    return *this;
}
