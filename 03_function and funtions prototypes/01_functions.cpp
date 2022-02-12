#include <iostream>
using namespace std;

int sum(int a , int b){  //you can use any word or anything in place of sum to make a function
    int c = a+b;
    return c;
}


int main() {
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"The sum of num1 and num2 is "<<sum(num1,num2);




    return 0 ;
}