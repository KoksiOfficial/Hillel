#include <iostream>
using namespace std;

class Employee
{
private:
    short age;
    short yearsOfService;
    float salary;

public:
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

void Employee::DisplayRoundedSalary()
{
    int roundedSalary = ((int)(salary / 10) * 10) + 10;
    cout << "Rounded salary: " << roundedSalary;
}

int main()
{
    Employee emp1;
    emp1.SetAge(30);
    emp1.SetYearsOfService(5);
    emp1.SetSalary(20473);

    cout << "Age: " << emp1.GetAge() << endl;
    cout << "YearsOfService: " << emp1.GetYearsOfService() << endl;
    cout << "Salary: " << emp1.GetSalary() << endl;
    emp1.DisplayRoundedSalary();
}