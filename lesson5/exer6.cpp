#include <iostream>

using namespace std;

#define usi unsigned short int

float Division(usi, usi);

int main()
{
    usi a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << Division(a, b) << endl;
    return 0;
}

float Division(usi a, usi b)
{
    if (b == 0)
        return -1;

    return float(a / b);
}