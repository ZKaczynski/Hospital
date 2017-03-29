#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <termios.h>
#include "menu_functions.h"
using namespace std;

void menu(){
char x;
Database All;
for(;;)
{
    cout<<"*******************MENU********************\n"<<endl;
    cout<<"\t\t1. See wards"<<endl;
    cout<<"\t\t2. Add ward"<<endl;
    cout<<"\t\t3. See diseases "<<endl;
    cout<<"\t\t4. Add disease"<<endl;
    cout<<"\t\t5. Exit."<<endl;
    cout<<"\t : ";
    cin>>x;

    switch (x)
    {
       case '1':system("clear"); see_data(All); system ("clear");
              break;
       case '2': add_ward(All);
              break;
       case '3': system ("clear");  All.getDieseases();
              break;
       case '4': add_disease(All);
              break;
       case '5': exit(0);
              break;
    default: system("clear");
    }



}
}
