#include <iostream>
using namespace std;

class Rectangle
{
    public:
    virtual Rectangle* Clone() {return new Rectangle(*this);}
    virtual void Info() {cout << "Rectangle" << endl;}
};

class Square : public Rectangle 
{
    public:
    Square() = default;
    Square(Square &rhs) = default;
    virtual Rectangle* Clone() override {return new Square(*this);}
    void Info() override {cout << "Square" << endl;}
};


int main()
{
    Rectangle* rect = new Square;
    rect->Info();

    Rectangle buffer {*rect};
    buffer.Info();

    Rectangle* buffer01 = rect->Clone();
    buffer01->Info();
}