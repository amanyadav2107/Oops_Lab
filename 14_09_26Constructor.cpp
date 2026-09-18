//Default Constructor
//If constructor is not created in class but object is created than constructor is called or not -> Yes it always called by default
//Parameterise Constructor
//Constructor in which parameter are passed that constructor is known as parameterise constructor.
//Copy Constructor
//Its value is same as the previous object to copy the object's value we have to make copy constructor

// #include <iostream>
// using namespace std;
// class Student{
// public:
//     int roll no;
//     int marks;
//     Student(){
//         roll no =101;
//         marks=90;
//     }
//     Student(int r, int m){
//         roll no =r;
//         marks=m;
//     }
// };

// int main() {
//     Student S1;
    
//     return 0;
// }

// Construct a class rectangle and use a copy contructor to create a second rectangle from the first.
#include <iostream>
using namespace std;
class Rectangle{

    int len;
    int width;
    Rectangle(){
        len=5;
        width=3;

    }
    Rectangle(int l, int w)
    {
        len = l;
        width = w;
    }
    Rectangle(const Rectangle &r)
    {
        len = r.len;
        width = r.width;
    }
};

int main() {
    
    return 0;
}