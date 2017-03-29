#include "menu_functions.h"
#include <iostream>
#include <stdlib.h>


using namespace std;


void see_data(Database &List){
    List.getWards();

    int i=0;

    cout<<"\tEnter number of ward to see its patients:";
    cin>>i;
    system("clear");

    i=i-1;
    cout<<"\t\t\t";
    cout.width( 20 );
    cout<<right<<List.getWardNr(i).getName()<<endl;


    for (int j=0;j<List.getWardNr(i).getFree();j++){

    cout.width( 2 );
    j=j+1;
    cout <<right<<j<<".";
    j=j-1;

    cout.width( 20 );
    cout<<left<<List.getWardNr(i).getPatient(j).getName();
    cout.width( 20 );
    cout<<left<<List.getWardNr(i).getPatient(j).getSurname()<<endl<<endl;

    }

    cout<<"\t\nEnter number of patient to see its diseases or '0' to add new patient:"<<endl;
    int k;
    cin>>k;
    system("clear");

    if (k==0)
    {

     string name;
    string surname;


     cout<<"\n\tEnter name of Patient:";
     cin>>name;

     system("clear");

     cout<<"\n\tEnter surname of Patient:";
     cin>>surname;



    Patient* w = new Patient(name,surname,0);

    List.getWardNr(i) + *w ;
    system("clear");

    }



    else {
            system("clear");
     k=k-1;
            cout<<"\n\t"<<List.getWardNr(i).getPatient(k).getName()<<" "<<List.getWardNr(i).getPatient(k).getSurname()<<endl;


    for (int  l=0;l<List.getWardNr(i).getPatient(k).getNrDiseases();l++){


            cout.width( 2 );
        l=l+1;
        cout <<right<<i<<".";
        l=l-1;

        cout.width( 20 );
        cout<<left<<List.getWardNr(i).getPatient(k).getDiseases(l).getDiseaseName();
        cout.width( 20 );
         cout<<left<<List.getWardNr(i).getPatient(k).getDiseases(l).isInfectious()<<endl;

        }


     cout<<"\n\tPress '0' to add new disease to patient"<<endl;
     int q;
    cin>>q;

    if (q==0){
     system ("clear");
     List.getDieseases();

     cout<<"\n\tEnter a number of disease you want to add to patient:"<<endl;
     int o;

      cin >>o;
    o=o-1;

     List.getWardNr(i).getPatient(k)  + List.getDiseaseNr(o);





    }

    else return;



        }
    }












    void add_ward(Database &List){
     system("clear");
     string name;
     int n;


     cout<<"\tEnter name of Ward:";
     cin>>name;

     system("clear");

     cout<<"\tHow many beds in this Ward?:";
     cin>>n;



    Ward* w = new Ward(name,n);
    List + *w ;
    system("clear");

    }




    void add_disease(Database &List){

     system("clear");

     string name;
     bool infec;
     char g=0;

     cout<<"\tEnter disease name:";
     cin>>name;

     system("clear");

     cout<<"\tIs it infectious? y/N"<<endl;


    cin>>g;
     switch (g)
    {
        case 'y': infec=true; break;

        default:  infec=false; break;

    }

    Disease* choroba = new Disease(name,infec);
    List + *choroba ;
    system("clear");
}
