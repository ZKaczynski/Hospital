#include <vector>
#include "manager.h"
#include <iostream>
#include <string>
using namespace std;

Database::Database(){

numberDiseases_=0;
numberWards_=0;


}

void Database::getDieseases(){
    cout.width( 20 );
    cout<<left<<"Name"<<"\t"<<
     "Infectious?"<<endl;

    for (int i=0;i<numberDiseases_;i++ ){
    cout.width( 2 );
    i=i+1;
    cout <<right<<i<<".";
    i=i-1;
    cout.width( 20 );
    cout<<left<<allDiseases_[i]->getDiseaseName()<<"\t"<<
     allDiseases_[i]->isInfectious()<<endl;

    }



}

void Database::getWards(){
    cout.width( 22 );
    cout<<left<<"    Name";
    cout.width( 20 );
    cout<<left<<"Total number of beds";
    cout.width( 25 );
    cout<<right<<"     Occupied beds"<<endl;

    for (int i=0;i<numberWards_;i++ ){
    cout.width( 2 );
    i=i+1;
    cout <<right<<i<<".";
    i=i-1;

    cout.width( 20 );
    cout<<left<<allWards_[i]->getName();
    cout.width( 20 );

    cout<<left<<allWards_[i]->getTotal();

    cout.width( 20 );
    cout<<right<<allWards_[i]->getFree()<<endl;

    }



}

int Database::getNumberWards(){
    return numberWards_;
     }

int Database::getNumberDiseases(){
    return numberDiseases_;
     }

Ward&  Database::getWardNr(int i)const{

  return *allWards_[i];
}

Disease&  Database::getDiseaseNr(int i)const{

  return *allDiseases_[i];
}


Database& Database::operator + (Disease &d){

        Database::allDiseases_.push_back(&d);
        Database::numberDiseases_++;

    return *this;
}



Database& Database::operator + (Ward &w){

        Database::allWards_.push_back(&w);
        Database::numberWards_++;

    return *this;
}


