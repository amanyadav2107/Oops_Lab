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
        cout << "  Student Parameterised Constructor called" << endl;
        this->id =id;
        this->age=age;
        this->name=name;
        this->nos=nos;
    }

    // Copy Constructor
    Student(const Student &srcobj) //srcobj => A
    {
        cout << "  Student copy Constructor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
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
    // Student A(1, 15, "Aman", 5); //Stack allocation
    // Student B(2, 14, "Amey",6 );
    // Student C(3, 16, "Amu",4 );
    // Student D(4, 17, "Amika",7);

    // cout<<A.name<<" "<<A.age<<endl;
    // A.bunk();
    // B.Sleep();

    //copy constructor
    // Student C =A;
    // Student C(A);
    // cout<<C.name<<" "<<A.name<<endl;

    //Dynamic allocation, or Student pointer
    Student *A =new Student(1, 14, "babban", 7);
    cout<< A->name <<endl;
    cout<< A->age <<endl;
    A->Study();
    delete A; //Call delete by urself otherwise distructor cantn't called in dynamic memory allocation
    return 0;
}