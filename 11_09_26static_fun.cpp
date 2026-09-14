// #include <iostream>
// using namespace std;
// void counter(){
//     static int count =0; //Initialized only once (static means it runs only one time and its value remain same)
//     count++;
//     cout<<count<<endl;
// }

// int main() {
//     counter();
//     counter();
//     counter();

//     return 0;
// }

//A static data memeber is shared bhy all the objects of the class

// #include <iostream>
// using namespace std;
// class Student{
// public:
//     static int count;
//     int roll;
//     Student(){
//         count++;
//     }
// };

// int Student::count =0; //this is mandatory

// int main() {
//     Student s1, s2, s3;
//     cout<<Student::count; //Write class name and scop resulation operator ---this is the sturucture
    
//     return 0;
// }
//Static local varialbe
//Static memeber variable
//Static memeber function

//Key Points:-
//Can be called without objects

//Static Global Variable:-A global variable declared static is visible only within the source file where it is defined.
//Key Points :-
//Internal linkage
//Not be accessed from other .cpp file......Scope in whole programe and it is also accessible by other .cpp program...due to static it is not accessible by other .cpp file 

//Static Fun:-Key Points:-
//Internal linkage 
//Hidden from other source file.

//Summary(In table)


// #include <iostream>
// using namespace std;
// class stud{
//     static int count;
// public:
//     stud(){
//         count++;
//     }
//     static void show(){
//         cout<< count <<"Object created "<<endl;
//     }
// };

// //Definition of static member

// int stud::count=0;
// int main() {
//     stud s1, s2,s3,s4;
//     stud::show();

    
//     return 0;
// }

//Create an employee class with a static data memeber company name and display it using a static member function

#include <iostream>
using namespace std;

class Employee
{
    static string companyName;
public:
    

    static void showCompany()
    {
        cout << "Company Name: " << companyName << endl;
    }
};

string Employee::companyName = "Microsoft";

int main()
{
    
    Employee::showCompany(); 

    return 0;
}

//Create a univesity class where the university name is static and the student details are non static , now display both student details with university name.

#include <iostream>
using namespace std;

class University
{
    static string universityName; 
    string studentName;
    int rollNo;
    float marks;
public:
    University(string sName, int r, float m)
    {
        studentName = sName;
        rollNo = r;
        marks = m;
    }

    static void showUniversity()
    {
        cout << "University Name: " << universityName << endl;
    }

    void showStudent() const
    {
        cout << "Student Name: " << studentName
             << ", Roll No: " << rollNo
             << ", Marks: " << marks << endl;
    }
};

string University::universityName = "Delhi University";

int main()
{
    University s1("Aman", 101, 89.5);
    University s2("Riya", 102, 92.0);
    University s3("Karan", 103, 85.0);

    University::showUniversity();

    s1.showStudent();
    s2.showStudent();
    s3.showStudent();

    return 0;
}
