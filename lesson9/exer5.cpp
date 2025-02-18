#include <iostream>
using namespace std;

int *Func();

int main()
{
    auto a = Func();
    cout << *a << endl;
    delete a;
    a = nullptr;
}

int *Func()
{
    int *a = new int(10);
    return a;
}