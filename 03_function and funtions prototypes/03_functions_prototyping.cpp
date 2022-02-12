#include <iostream>
using namespace std;

int sum(int a, int b); 
//here we made the function call after the executing the main program and then 
// it finds the function which is return downward this is function prototype


void g(void); 
//void will let the program pass and gives argument only when called.

// int sum(int a , b); unacceptable. Will throw an error

// int sum(int, int); this one is also acceptable.
int main() {
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"The addition of num1 from num2 is "<<sum(num1, num2)<<endl;
    g();

    return 0 ;
}
int  sum(int a, int b){
    int c = a+b;
    return c;
}
void g(void){
    cout<<"Hello Rehan. Good Morning😊😊";
}