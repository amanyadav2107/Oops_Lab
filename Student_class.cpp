#include <iostream>
using namespace std;

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    // Constructor
    //  Student(){
    //      cout<<"Student Default Constructor Called"<<endl;
    //  }

    // Parameterised Constructor
    Student(int id, int age, string name, int nos)
    {
        cout << " Student Parameterised Constructor called" << endl;
    }

    // Behaviour /Methods/ Function
    void Study()
    {
        cout << this->name << " Studying" << endl;
    }
    void Sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " Bunking" << endl;
    }
    // Destructor
    ~Student()
    {
        cout << " Student Default Destructor Called" << endl;
    }
};

int main()
{
    // Student A;
    // A.id = 1;
    // A.age = 20;
    // A.name = "Aman";
    // A.nos = 5;

    // A.Study();

    // Student B;
    // A.id = 2;
    // A.age =21;
    // A.name="Amey";
    // A.nos =6;

    // A.bunk();
    Student A(1, 15, "Aman", 5);
    return 0;
}