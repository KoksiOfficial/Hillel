#include <iostream>
using namespace std;

int main()
{
    int elem;
    int *pElem = &elem;
    *pElem = 50;
    cout << "\nElem = " << elem << endl
         << "*pElem = " << *pElem << endl
         << "&Elem = " << &elem << endl
         << "pElem = " << pElem << endl;

    return 0;
}
