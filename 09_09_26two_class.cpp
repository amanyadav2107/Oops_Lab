// Create two classes: Student and Sports. Store academic marks in Student
// and sports marks in Sports; both should be private. Use a friend function
// to calculate the total marks.

#include <bits/stdc++.h>
using namespace std;

class Sports;

class Student
{
private:
    int academicMarks;
    friend int totalMarks(Student, Sports);

public:
    Student(int marks) : academicMarks(marks) {}
};

class Sports
{
private:
    int sportsMarks;
    friend int totalMarks(Student, Sports);

public:
    Sports(int marks) : sportsMarks(marks) {}
};

int totalMarks(Student student, Sports sports)
{
    return student.academicMarks + sports.sportsMarks;
}

int main()
{
    Student student(80);
    Sports sports(15);

    cout << "Total Marks = " << totalMarks(student, sports) << endl;

    return 0;
}