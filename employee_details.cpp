// Write a c++ progrgam to display the employee details like id, name, and salary.Create a class Employee and use the arrow operator to accessing the class members.

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee *emp = new Employee(101, "Aman", 50000000000000000.50);
    cout << "Accessing members using arrow operator:" << endl;
    emp->display();
    delete emp;

    return 0;
}
