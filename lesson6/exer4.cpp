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
};

void DisplayEmployeeInfo(Employee);

int main()
{
    Employee emp1, emp2;
    emp1.SetAge(30);
    emp1.SetYearsOfService(5);
    emp1.SetSalary(20000);

    emp2.SetAge(35);
    emp2.SetYearsOfService(10);
    emp2.SetSalary(40000);

    DisplayEmployeeInfo(emp1);
    DisplayEmployeeInfo(emp2);
}

void DisplayEmployeeInfo(Employee emp)
{
    cout << "\nAge: " << emp.GetAge() << endl;
    cout << "YearsOfService: " << emp.GetYearsOfService() << endl;
    cout << "Salary: " << emp.GetSalary() << endl;
}