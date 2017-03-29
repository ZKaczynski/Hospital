#include <ostream>

using namespace std;
class Disease
{


    public:

    Disease(string diseaseName_="NO NAME", bool infectious_=false);
    ~Disease();

    bool setDiseaseName(string);
    void setInfectious(bool);

    string getDiseaseName() const;
    bool isInfectious() const;


    bool operator!=(const Disease &d) const;
    Disease& operator=(const Disease &d);

    private:

    string diseaseName_;
    bool infectious_;
};
