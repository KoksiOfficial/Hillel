#include <iostream>

int main()
{
    int i = 100;
    do
    {
        if (i == 100)
            std::cout << "At the start i = " << i << std::endl;

        i += 2;
    } while (i < 200);

    std::cout << "At the end i = " << i << std::endl;
}