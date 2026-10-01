#include <iostream>
using namespace std;

class Demo
{
public:
    // Default constructor
    Demo()
    {
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Demo(int x)
    {
        cout << "Parameterized Constructor: " << x << endl;
    }

    // Copy constructor
    Demo(const Demo &obj)
    {
        cout << "Copy Constructor" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Demo d1;      // Default
    Demo d2(10);  // Parameterized
    Demo d3 = d2; // Copy

    return 0; // Destructors called automatically
}