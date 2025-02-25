#include <iostream>
using namespace std;

class SimpleCircle
{
public:
    SimpleCircle()
    {
        ItsRadius = new int(15);
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
    temp.SetItsRadius(20);

    SimpleCircle temp01 = temp;    
    
    cout << "temp01.GetItsRadius() = " << temp01.GetItsRadius() << endl;
}