#include <iostream>
using namespace std;

int *Func();

int main()
{
    auto a = Func();
    cout << *a << endl;
}

int *Func()
{
    int a{10};
    return &a;
}