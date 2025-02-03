#include <iostream>
using namespace std;

class Employee
{
private:
    short age;
    short yearsOfService;
    float salary;

public:
    Employee(short, short, float);

    // getters
    short GetAge() const { return age; }
    short GetYearsOfService() const { return yearsOfService; }
    float GetSalary() const { return salary; }

    // setters
    void SetAge(short age_) { age = age_; }
    void SetYearsOfService(short yearsOfService_) { yearsOfService = yearsOfService_; }
    void SetSalary(float salary_) { salary = salary_; }

    void DisplayRoundedSalary();
};

Employee::Employee(short age, short yearsOfService, float salary)
{
    this->age = age;
    this->yearsOfService = yearsOfService;
    this->salary = salary;
}

void Employee::DisplayRoundedSalary()
{
    int roundedSalary = ((int)(salary / 10) * 10) + 10;
    cout << "Rounded salary: " << roundedSalary;
}

int main()
{
    Employee emp1(30, 5, 20463);

    cout << "Age: " << emp1.GetAge() << endl;
    cout << "YearsOfService: " << emp1.GetYearsOfService() << endl;
    cout << "Salary: " << emp1.GetSalary() << endl;
    emp1.DisplayRoundedSalary();
}