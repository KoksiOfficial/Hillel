#include <iostream>
using namespace std;

class SimpleCircle
{
public:
    SimpleCircle()
    {
        ItsRadius = new int();
    }

    SimpleCircle(int val)
    {
        ItsRadius = new int (val);
    }

    SimpleCircle(const SimpleCircle &rhs);

    ~SimpleCircle()
    { 
        delete ItsRadius;
    }

    int GetItsRadius() const
    {
        return *ItsRadius;
    }

    void SetItsRadius(int val)
    {
        *ItsRadius = val;
    }

    const SimpleCircle &operator++();
    const SimpleCircle operator++(int);
    const SimpleCircle &operator=(const SimpleCircle &);

    private:
        int* ItsRadius;
};

const SimpleCircle &SimpleCircle::operator=(const SimpleCircle &rhs)
{
    if (this == &rhs)
        return *this;
        
    *ItsRadius = rhs.GetItsRadius();
    return *this;
}

const SimpleCircle &SimpleCircle::operator++()
{
    (*ItsRadius)++;
    return *this;
}

const SimpleCircle SimpleCircle::operator++(int)
{
    SimpleCircle temp(*this);
    (*ItsRadius)++;
    return temp;
}

SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
    this->ItsRadius = new int(rhs.GetItsRadius());
}

int main()
{
    SimpleCircle temp;
    SimpleCircle temp01(9);
    
    temp++;
    temp01++;

    cout << "temp.GetItsRadius()   = " << temp.GetItsRadius() << endl;
    cout << "temp01.GetItsRadius() = " << temp01.GetItsRadius() << endl;

    temp = temp01;

    cout << "\ntemp.GetItsRadius()   = " << temp.GetItsRadius() << endl;
    cout << "temp01.GetItsRadius() = " << temp01.GetItsRadius() << endl;
}