#include <iostream>
using namespace std;


int main() {
    int num1 , num2;
    cout<<"Enter Your number: "<<endl;
    cin>>num1;

    cout<<"Enter Your Number "<<endl;
    cin>>num2;

    cout<<"The first number is "<<num1<<" and the second number is "<<num2<<endl;


    int temp = num1;
    num1  = num2;
    num2 = temp;
    cout<<"After swaping the first number is "<<num1<<endl;
    cout<<"After swaping the second number is "<<num2<<endl;

    
    return 0 ;
}