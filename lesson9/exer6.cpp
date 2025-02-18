#include <iostream>
using namespace std;

// Тут точно є виток пам'яті при поверненні з Func()
// але в мене не вийшло визвати паплюження інформації у main()

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
}