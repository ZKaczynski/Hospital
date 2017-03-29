#include "diesease.h"
#include <ostream>
#include <vector>
using namespace std;

class Patient
{

public:
    Patient(string n="NO NAME", string w="NO SURNAME", int x=0);
    ~Patient();

    bool setName(string);
    bool setSurname(string);
    string getName()const;
    string getSurname()const;

    Patient& operator +(Disease &d);

    Patient& operator=(const Patient &p);
    bool operator!=(const Patient &p) const ;

    int getNrDiseases ();

    Disease& getDiseases(int i)const;

private:
    string name_;
    string surname_;
    vector<Disease*>  patientDiseases_;
    int numberDiseases_;
};
