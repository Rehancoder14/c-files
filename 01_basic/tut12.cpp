#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>18){
        cout<<"You are adult."<<endl;
        }

    else if (age==18){
        cout<<"your are exactly 18 years old"<<endl;
    }
    
    else if (age<0){
        cout<<"Your are not born yet"<<endl;
    }

    else {
        cout<<"Your are under adult"<<endl;
    }


    return 0 ;
}