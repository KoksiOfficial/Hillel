#include <iostream>

using namespace std;

// Баг: у методі MakeCat створюється нова змінна у хіпі,
// коли ми виходимо з методу то повертаємо аліас, що викликає конструктор копіювальник
// і Boots наспоавді є копією pCat, тому має іншу адресу, але
// pCat, визначений у хіпі, ніколи не був і не буде звільнений, що викличе
// витікання пам'яті при кожному виклику MakeCat

class Cat
{
public:
    Cat(int age) { itsAge = age; }
    Cat(const Cat &other)
    {
        itsAge = other.itsAge;
        cout << "in copy constr" << endl;
    }
    ~Cat() {}
    int GetAge() const { return itsAge; }

private:
    int itsAge;
};

Cat &MakeCat(int age);

int main()
{
    int age = 7;
    Cat Boots = MakeCat(age);
    cout << &Boots << endl;
    cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
    return 0;
}

Cat &MakeCat(int age)
{
    Cat *pCat = new Cat(age);
    cout << pCat << endl;
    return *pCat;
}
