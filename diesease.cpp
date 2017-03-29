#include <iostream>
#include "diesease.h"

#define _DEBUG
using namespace std;

Disease::Disease(string name, bool z)
{
    #ifdef _DEBUG
    cout<<"Created Disease"<<endl;
    #endif // _DEBUG
    if (name=="")
    {
        cout<<"Invalid input data"<<endl;
    }
    else
    {
    diseaseName_ = name;
    infectious_=z;
    }
}

Disease::~Disease()
{
    #ifdef _DEBUG
    cout<<"Deleted Disease"<<endl;
    #endif // _DEBUG
}

bool Disease::setDiseaseName(string name)
{
    if (name=="")
    {
        return false;
    }
    else
    {
        diseaseName_ = name;
        return true;
    }
}

void Disease::setInfectious(bool z)
{
    Disease::infectious_ = z;
}

string Disease::getDiseaseName() const
{
    return Disease::diseaseName_;
}
bool Disease::isInfectious()const
{
    return Disease::infectious_;
}

bool Disease::operator!=(const Disease &p)const
{
    bool l = 0;
    if(diseaseName_!=p.diseaseName_)
        l =1;
    if(infectious_!=p.infectious_)
        l =1;
    return l;
}

Disease& Disease::operator=(const Disease &p)
{
    diseaseName_ = p.diseaseName_;
    infectious_ = p.infectious_;
    return *this;
}
