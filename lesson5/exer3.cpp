#include <iostream>
using namespace std;

// Баг1: у рядку <y = myFunc(int);> до фунції myFunc() ми повинні передвти змінну,
// а не ключове слово

// Баг2: у рядку <y = myFunc(int);> ми присвоюємо змінній типу unsigned short int тип void
// що очевидно не можливо

// Баг3: у тілі фунції myFunc() ми не повинні повертати данні через return
// так як прототип функції повертає значення типу void

void myFunc(unsigned short int x);
int main()
{
    unsigned short int x, y;
    y = myFunc(int);
    cout << "x: " << x << "y: " << y << "\n";
}
void myFunc(unsigned short int x)
{
    return (4 * x);
}
