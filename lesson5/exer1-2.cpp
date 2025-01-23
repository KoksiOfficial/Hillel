#include <iostream>

#define usi unsigned short int
#define uli unsigned long int

uli Perimeter(usi, usi);

int main()
{
    auto temp = Perimeter(5, 10);
    std::cout << temp << std::endl;
    return 0;
}

uli Perimeter(usi length, usi width)
{
    return 2 * (length + width);
}