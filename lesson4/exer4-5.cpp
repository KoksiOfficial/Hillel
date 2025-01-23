#include <iostream>

using namespace std;

// Очікувано нічого не виводиться через невірноий оператор в if
// Аналогічний випадок с завданнями 2-3

int main()

{

    int a = 1, b = 1, c;

    if (c = (a - b))

        cout << "The value of c is: " << c;

    return 0;
}
