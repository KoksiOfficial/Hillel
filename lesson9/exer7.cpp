#include <iostream>
using namespace std;

void Func();

int main()
{
    Func();
    int *p = new int[600];
    for (int i = 0; i < 600; i++)
        p[i] = -1;

    cout << p[5] << endl;
}

void Func()
{
    int *p = new int[600];
    for (int i = 0; i < 600; i++)
        p[i] = i;
    delete p;
    p = nullptr;
}