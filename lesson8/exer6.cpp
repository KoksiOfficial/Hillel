#include <iostream>

using namespace std;

// Bugs: №1 у рядку pVar = 9; ми намагаємось перевизначити поінтер
//  надавши йому цілочисельне значення, що не є вірним
//  За логікою програми ми мали б розіменувати pVar та вже ньому передвти 9

int main()
{
    int SomeVariable = 5;
    cout << "SomeVariable: " << SomeVariable << "\n";
    int *pVar = &SomeVariable;
    pVar = 9;
    cout << "SomeVariable: " << *pVar << "\n";
    return 0;
}
