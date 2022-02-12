#include <iostream> //system header files
// this comes with the compiler
// #include "this.h" //file containing particular name should exist.

using namespace std;
int main(){
    int num1, num2;
    cout<<"Operators in c++"<<endl;
    cout<<"following are the types of operators in c"<<endl; //endl is function to jump to new line
    //Arithmetic operators
    cout<<"value of num 1 : ";
    cin>>num1;
    
    cout << "value of num2 : ";
    cin>>num2;

    cout<<"the addition is "<<num1+num2;
    cout<<"subtraction is "<<num2 - num1;
    cout<<"multiplication is "<<num1*num2;
    cout<<"division is "<<num2/num1;
    


    // comparison operators
    cout<<"value of num1==num2 is "<<(num1==num2)<<endl;
    cout<<"value of num1<num2 is "<<(num1<num2)<<endl;
    cout<<"value of num1>num2 is "<<(num1>num2)<<endl;
    cout<<"value of num1!=num2 is "<<(num1!=num2)<<endl;
    
   

    
    
    
    return 0;
}