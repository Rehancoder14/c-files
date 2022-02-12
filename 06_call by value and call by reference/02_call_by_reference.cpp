#include <iostream>
using namespace std;

int sum(int a , int b){
    int c = a+b;
    return c;
}

void swap(int a, int b){
    int c = a;
    a = b;
    b = c;

}

void referencevar(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main() {
    int num1=5,  num2=6;
    // cout<<"The addition of num is "<<sum(num1,num2);
    cout<<"The value of a is "<<num1<<endl;
    cout<<"The value of b is "<<num2<<endl;

    referencevar(num1,num2);
    cout<<"The value of a is "<<num1<<endl;
    cout<<"The value of b is "<<num2<<endl;





    return 0 ;
}