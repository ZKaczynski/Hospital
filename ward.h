
#include "patient.h"
#include <ostream>

using namespace std;


class Ward
{
    string name_;
    int totalBeds_;
    int ocupiedBeds_;
    vector<Patient*>  wardPatients_;

    public:


    Ward(string name = "NO NAME", int n=1);
    ~Ward();

    bool setName(string);
    bool setTotal(int);

    string getName() const;
    int getTotal() const;
    int getFree() const;

    Ward& operator + (Patient &p);

    Patient& getPatient(int i)const;

    bool operator!=(const Ward &p)const;
    Ward& operator=(const Ward &p);
};
