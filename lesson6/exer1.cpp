#include <iostream>
using namespace std;

double PowerRecurs(double number, double power);

int main()
{
    double number, power;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Enter power: ";
    cin >> power;

    auto result = PowerRecurs(number, power);

    cout << "The restult = " << result << endl;
}

double PowerRecurs(double n, double p)
{
    if (p == 1)
        return n;

    return PowerRecurs(n, p - 1) * n;
}