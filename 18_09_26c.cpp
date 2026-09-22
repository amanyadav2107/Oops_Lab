// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     int age;
//     string name;

//     Student(int age, string name)
//     {                      // Same parameter ke wajh se garbage value milega....if name are same
//         this->age = age;   // arrow operator is used to point a function
//         this->name = name; // this operator is used to objectify the member function
//         //it only works on non static function
//     }
//     void display()
//     {
//         cout << "Age = " << age << ",";
//         cout << "Name = " << name << endl;
//         cout << this; //it print the address of current object;
//     }
// };

// int main()
// {
//     Student s1(38, "John");
//     Student s2(49, " Steve");
//     s1.display();
//     s2.display();
//     return 0;
// }

//Class member Student and object and only name and only pointer and access the data member using the pointers/
//Create a class Student name and object inside the class

//Pointer to object
//Arrow operator because we use pointer and it is pointing the address
//object ke through acces kr rhe then dot operator ....arrow operator due to pointer

#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void display()
    {
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Aman";

    Student *ptr = &s1;        // Pointer to object
    cout << ptr->name << endl; // Access using arrow operator
    ptr->display();            // Call member function using pointer

    return 0;
}

