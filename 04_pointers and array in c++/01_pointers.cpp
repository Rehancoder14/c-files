#include <iostream>
using namespace std;

int main() {
    //pointer is datatype which holds the address of the other data types
    int a = 3;
    int * b = &a;
    cout<<b<<endl;
    cout<<a<<endl;
    cout<<*b<<endl;
    int ** c = &b;
    cout<<c<<endl;
    cout<<**c<<endl;

    return 0 ;
}