#include <iostream>
using namespace std;
class Student{
public:
    int age;
    string name;
    
    Student(int age, string name){ //Same parameter ke wajh se garbage value milega....if name are same
        this -> age = age;
        this -> name = name;
    }
    void display(){
        cout<<"Age = "<<age<<",";
        cout<<"Name = " <<name<<endl;
    }
};

int main() {
    Student s1(38, "John");
    Student s2(49, " Steve");
    s1.display();
    s2.display();
    return 0;
}