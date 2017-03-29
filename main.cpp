#include <iostream>
#include "tests.h"


#define _DEBUG
using namespace std;

int main()
{

    #ifdef _DEBUG
    cout<<"Debug"<<endl;
    #else
    cout<<"Relase"<<endl;
    #endif // _DEBUG

    //test1();
    //test2();
    menu();

    return 0;
}
/*
class Class
{
    public:
    void firstMethod();

    private:
    int firstInt_;
};
*/
