#include <iostream>

int main()
{
    int i;
    for (i = 100; i < 200; i += 2)
    {
        if (i == 100)
            std::cout << "At the start i = " << i << std::endl;
    }

    std::cout << "At the end i = " << i << std::endl;
}