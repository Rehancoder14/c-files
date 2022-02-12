#include <iostream>
using namespace std;

int sub(int a, int b){
    int c = a-b;
    return c;
}

int addnum(int a, int b){
    int c= a+b;
    return c;
}
int main() {
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"The substraction of num1 from num2 is "<<sub(num1, num2)<<endl;
    cout<<"The addition of num1 and num2 is "<<addnum(num1, num2)<<endl;

    

    return 0 ;
}