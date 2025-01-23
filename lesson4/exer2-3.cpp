#include <iostream>

using namespace std;

// Програма спрацьовує не так як ми очікували через невірну перевірку в операторі if
// замість оператора присвоювання = слід використати оператор порівняння ==
// в операторі if при значеннях змінних a і b 20 та 10 завжди буде true, бо
// всі значення окрім нуля конвертуються в true

int main()

{

    int a, b, c;

    cout << "Please enter three numbers) \n";

    cout << "a: ";

    cin >> a;

    cout << "\nb: ";

    cin >> b;

    cout << "\nc: ";

    cin >> c;

    if (c = (a - b))

    {

        cout << "\na: ";

        cout << a;

        cout << " minus b: ";

        cout << b;

        cout << " equals c: ";

        cout << c << endl;
    }

    else

        cout << "a - b does not equal c: " << endl;

    return 0;
}
