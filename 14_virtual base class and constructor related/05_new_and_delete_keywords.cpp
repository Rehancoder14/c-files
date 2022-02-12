#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int*ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    
    //new keyword
    int *pr = new int(40);
    cout<<"the value at address pr is "<<*pr<<endl;

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    delete arr; //This will change original value into the garbage values
    cout<<"the list is "<<arr[0]<<endl; 
    cout<<"the list is "<<arr[1]<<endl; 
    cout<<"the list is "<<arr[2]<<endl; 
    cout<<"the list is "<<arr[3]<<endl; 
    return 0 ;
}