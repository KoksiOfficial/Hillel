#include <iostream>
using namespace std;
typedef unsigned short USI;

int main()
{
    USI yourAge = 10;
    USI *pYourAge = &yourAge;
    cout << "\nyourAge = " << yourAge << endl
         << "*pYourAge = " << *pYourAge << endl
         << "&yourAge = " << &yourAge << endl
         << "pYourAge = " << pYourAge << endl;

    *pYourAge = 50;

    cout << "\nyourAge = " << yourAge << endl
         << "*pYourAge = " << *pYourAge << endl
         << "&yourAge = " << &yourAge << endl
         << "pYourAge = " << pYourAge << endl;

    return 0;
}
