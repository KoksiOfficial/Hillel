#include <iostream>
using namespace std;

class Shape
{
    public:
    Shape(){cout << "Creating shape" << endl;}
    int length, width;
};

class Rectangle : Shape
{
    public:
    Rectangle(int length, int width)
    {
        Shape::length = length;
        Shape::width = width;
        cout << "Creating rectangle" << endl;
    }
};

class Square : Rectangle
{
    public:
    Square(int length) : Rectangle(length, length)
    {
        cout << "Creating square" << endl;
    }
};

main()
{
    Square(4);
}
