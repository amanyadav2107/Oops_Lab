#include <iostream>
using namespace std;
inline int si(int p, int r, int t=2){
    return(p*r*t)/100;

}

int main() {
    int a =si(2000,12);
    cout<<a;
    
    return 0;
}