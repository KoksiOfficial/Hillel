// Баги: у оголошенні класу Cat метод GetAge() за логікою програми має бути публічний,
// але це явно не вказано, тож за замовженням він приватний.
// Також якщо ви робимо метод GetAge(), було б логічно додати метод SetAge()

class Cat
{
    int GetAge() const;

private:
    int itsAge;
};
