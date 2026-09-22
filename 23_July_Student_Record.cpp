#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    float marks;
}

void display() //(string n, int r, float m)
{
    cout<<"Name = "<< n;ame;
    cout<<"Roll No. = "<< rollNo;
    cout<<"Marks = "<< marks;


}

int main(){
    Student s;
    s.name = "Aman";
    s.rollNo = 164;
    float marks = 100;
    s.display();
    return 0;
    // string name = "Aman Yadav";
    // int rollNo = 164;
    // float marks = 89.5;
    // display(name, rollNo, marks);

    //Why we use constructor ?
    //Constructor is used to define object clearly 
    // Whenever we create a node a constructor is invoked 




    #include <iostream>
    using namespace std;
    class Student{
    public:
        string name;
        int rollo;
        float marks;

        Student()
        {
            name ="Aman";
            rollNo = 164;
            marks = 89.5;
        }

        void Student (){
            cout<<"Name: "<< name <<endl;
            cout<<"Roll no. : "<< rollNo <<endl;
            cout<<"Marks :"<< marks <<endl;
        }
    }
    
    int main() {
        
        return 0;
    }



    //Using Arguments

    #include <iostream>
    using namespace std;
    class Student
    {
    public:
        string name;
        int rollNo;
        float marks;
    }

    int main()
    {
        int n;
        cout<<"Enter the number of students :";
        cin>> n;
        Student s[n];
        for (int i=0 ;i<n; i++)
        

        return 0;
    }

    ////////////////////////////////

#include <iostream>
#include <vector>
#include <string>
    using namespace std;

    class Student
    {
    private:
        int rollNo;
        string name;
        float marks;

    public:
        // Accept student details
        void acceptDetails()
        {
            cout << "Enter Roll No: ";
            cin >> rollNo;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Marks: ";
            cin >> marks;
        }

        // Display student details
        void displayDetails() const
        {
            cout << "Roll No: " << rollNo
                 << ", Name: " << name
                 << ", Marks: " << marks << endl;
        }

        // Increase marks by 5%
        void increaseMarks()
        {
            marks += marks * 0.05;
            cout << "Marks increased by 5% successfully.\n";
        }

        float getMarks() const { return marks; }
        int getRollNo() const { return rollNo; }
        string getName() const { return name; }
    };

    // Student Record System class to manage multiple students
    class StudentRecordSystem
    {
    private:
        vector<Student> students;

    public:
        void addStudent()
        {
            Student s;
            s.acceptDetails();
            students.push_back(s);
        }

        void showAll() const
        {
            cout << "\n--- Student Records ---\n";
            for (const auto &s : students)
            {
                s.displayDetails();
            }
        }

        void showTopper() const
        {
            if (students.empty())
            {
                cout << "No students available.\n";
                return;
            }
            const Student *topper = &students[0];
            for (const auto &s : students)
            {
                if (s.getMarks() > topper->getMarks())
                {
                    topper = &s;
                }
            }
            cout << "\nTopper:\n";
            topper->displayDetails();
        }
    };

    int main()
    {
        StudentRecordSystem system;

        // Add students
        system.addStudent();
        system.addStudent();

        // Show all records
        system.showAll();

        // Show topper
        system.showTopper();

        return 0;
    }

    ////
