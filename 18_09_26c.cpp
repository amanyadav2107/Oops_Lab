#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    string name;

    Student(int age, string name)
    {                      // Same parameter ke wajh se garbage value milega....if name are same
        this->age = age;   // arrow operator is used to point a function
        this->name = name; // this operator is used to objectify the member function
        //it only works on non static function
    }
    void display()
    {
        cout << "Age = " << age << ",";
        cout << "Name = " << name << endl;
        cout << this; //it print the address of current object;
    }
};

int main()
{
    Student s1(38, "John");
    Student s2(49, " Steve");
    s1.display();
    s2.display();
    return 0;
}