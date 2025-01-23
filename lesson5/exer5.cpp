#include <iostream>

#define usi unsigned short int

float Division(usi, usi);

int main()
{
    std::cout << Division(10, 0) << std::endl;
    return 0;
}

float Division(usi a, usi b)
{
    if (b == 0)
        return -1;

    return float(a / b);
}