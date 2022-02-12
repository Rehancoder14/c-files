#include <iostream>
using namespace std;

int c = 45;

int main(){
    
    int a, b, c;
    
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The value of c is "<<c<<endl; //This line will print the addition of a and b.
    cout<<"The value of c is "<<::c; //double colon (::) is a scope resolution  operator this will print the value of c which  is global or out of int main()
    return 0;
}
