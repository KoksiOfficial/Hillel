#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 20;
    if (a > b)
        a = b;
    else
        b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}