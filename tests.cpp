
#include "tests.h"
#include "manager.h"
#include <iostream>
void test1(){
    Database All;
    Ward w;
    Patient p;
    Disease d;
    Disease f;
    w.setTotal(10);
    w.setName("St. Patric ward");

    p.setName("Bob");
    p.setSurname("Black");
    f.setDiseaseName("Broken arm");
    f.setInfectious(false);
    d.setDiseaseName("Rash");
    d.setInfectious(true);
    w+p;
    p+d;

    //cout<<d.getDiseaseName()<<endl;
    //cout<<d.isInfectious()<<endl;

   // cout<<(p.getDiseases(0)).getDiseaseName()<<endl;
    All+f;
    All+d;

    All.getDieseases();


     Patient q;
    q.setName("Sue");
    q.setSurname("Red");
     w+q;

}


void test2(){
Disease choroba;
cout<<choroba.getDiseaseName()<<endl;
cout<<choroba.isInfectious()<<endl;

choroba.setDiseaseName("Dzuma");
choroba.setInfectious(true);
cout<<choroba.getDiseaseName()<<endl;
cout<<choroba.isInfectious()<<endl;

}
