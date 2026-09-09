//Create a class employee with basic salary use a friend function to calculate the gross salary HR 20% of basics salary and 
#include <iostream>
using namespace std;

class Employee
{
private:
    int basicSalary;

public:
    Employee(int salary)
    {
        basicSalary = salary;
    }

    friend float grossSalary(Employee e);
};

float grossSalary(Employee e)
{
    float HR = 0.20 * e.basicSalary;
    float gross = e.basicSalary + HR;
    return gross;
}

int main()
{
    Employee e(50000);

    cout << "Gross Salary = " << grossSalary(e);

    return 0;
}

//reate two classes student class and sports class , store the academic mark in the student class and sport mark in sports class and these should be private.Use the frien function to calculate the total marks 