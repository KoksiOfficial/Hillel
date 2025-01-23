#include <iostream>
using namespace std;

// Баг1: у рядку 15 перед тілом функції myFunc() використан зайвий символ ';'

// Баг2: ми просвоюємо змінній типу unsigned short int значення типу int, що призведе
// до не бажаного скорочення значення, якщо присвоїти змінній x значення від ~ 16400
// так як буде перевищенно макс значення цього типу

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x = 17000, y;
    y = myFunc(x);
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x)
{
    return (4 * x);
}
