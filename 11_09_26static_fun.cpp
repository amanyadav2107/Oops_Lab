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

#include <iostream>
using namespace std;
class Student{
public:
    static int count;
    int roll;
    Student(){
        count++;
    }
};

int Student::count =0; //this is mandatory

int main() {
    Student s1, s2, s3;
    cout<<Student::count; //Write class name and scop resulation operator ---this is the sturucture
    
    return 0;
}