#include <iostream>

using namespace std;

// Тут не викликається копіювальний так як виконується оптимізація компілятором (NRVO)

class Cat
{
public:
    Cat(int age) { itsAge = age; }
    ~Cat() {}
    int GetAge() const { return itsAge; }

private:
    int itsAge;
};

Cat MakeCat(int age);

int main()
{
    int age = 7;
    Cat Boots = MakeCat(age);
    cout << &Boots << endl;
    cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
    return 0;
}

Cat MakeCat(int age)
{
    Cat pCat(age);
    cout << &pCat << endl;
    return pCat;
}
