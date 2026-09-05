// Exp 2
#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
    cout << "Inside callByValue: x = " << x << endl;
}

void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside callByReference: x = " << x << endl;
}

void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside callByAddress: *x = " << *x << endl;
}

int main()
{
    int a = 5, b = 5, c = 5;

    cout << "Initial values: a=" << a << ", b=" << b << ", c=" << c << endl;

    callByValue(a);
    cout << "After callByValue: a = " << a << endl;

    callByReference(b);
    cout << "After callByReference: b = " << b << endl;

    callByAddress(&c);
    cout << "After callByAddress: c = " << c << endl;

    return 0;
}
 