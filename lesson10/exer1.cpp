#include <iostream>
using namespace std;

class SimpleCircle
{
public:
    SimpleCircle()
    {
        ItsRadius = 15;
    }

    SimpleCircle(const SimpleCircle &rhs);

    ~SimpleCircle()
    { }

    int GetItsRadius() const
    {
        return ItsRadius;
    }

    const SimpleCircle &operator++();
    const SimpleCircle operator++(int);

    private:
        int ItsRadius;
};

const SimpleCircle &SimpleCircle::operator++()
{
    this->ItsRadius++;
    return *this;
}

const SimpleCircle SimpleCircle::operator++(int)
{
    SimpleCircle temp(*this);
    this->ItsRadius++;
    return temp;
}

SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
    this->ItsRadius = rhs.ItsRadius;
}

int main()
{
    int k{};
    SimpleCircle temp;

    cout << "Its radius: " << temp.GetItsRadius() << endl;
    cout << "k = " << k << endl;

    k = (temp++).GetItsRadius();

    cout << "\nIts radius: " << temp.GetItsRadius() << endl;
    cout << "k = " << k << endl;

    k = 0;
    cout << "\nk = " << k << endl;

    k = (++temp).GetItsRadius();
    cout << "\nIts radius: " << temp.GetItsRadius() << endl;
    cout << "k = " << k << endl;
}