#include <iostream>
using namespace std;

void DisplayData(int, int &, int *);

int main()
{
    int a{10};
    int &b{a};
    int *c = &a;
    DisplayData(a, b, c);

    b = 11;
    DisplayData(a, b, c);

    *c = 12;
    DisplayData(a, b, c);
}

void DisplayData(int a, int &b, int *c)
{
    cout << "\na = " << a << endl
         << "b = " << b << endl
         << "c = " << *c << endl;
}