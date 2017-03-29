
#include "ward.h"
#include <ostream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Database{


public:

Database ();


void getDieseases();
void getWards();
int getNumberWards();
int getNumberDiseases();

Ward&  getWardNr(int i)const;
Disease&  getDiseaseNr(int i)const;

Database& operator + (Disease &d);
Database& operator + (Ward &w);

private:
vector <Disease*> allDiseases_;
vector <Ward*> allWards_;
int numberDiseases_;
int numberWards_;

};
