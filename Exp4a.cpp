//Friend function
#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    static int count; // Shared data

    Student(int m)
    {
        marks = m;
        count++;
    }

    friend void display(Student s);
};

int Student::count = 0;

void display(Student s)
{
    cout << "Marks: " << s.marks << endl;
    cout << "Total Students: " << Student::count << endl;
}

int main()
{
    Student s1(85);
    Student s2(90);

    display(s1);
    display(s2);

    return 0;
}