// C++ Program to Swap Two Numbers Without Using third variable
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cin>>num1>>num2;
    cout<<"the value of a and b is "<<num1<<endl<<num2<<endl;
    num1 = num1+num2; // suppose num1 is 50 and num2 is 40
    //50+40 = 90 new value of num 1 will be 90 

    num2 = num1 - num2;
    // here 90 - 40; new value of num2 will 50
    num1 = num1 -num2;
    // here 90 - 50 ; new value of num1 will be 40 
    //value are interchanged
    cout<<"The after interchanging is "<<num1<<" and "<<num2;

    return 0 ;
}
