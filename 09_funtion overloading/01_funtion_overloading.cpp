#include <iostream>
using namespace std;
// functions can be overloaded
// it can take the arguments accordingly
int add1(int a , int b){
    cout<<"Using functions with 2 arguments\n";
    return a+b;
}
int add1(int a , int b, int c){
    cout<<"Using functions with 3 arguments\n";
    return a+b+c;
}

//Here it will match the arguments and operates itself
int main() {
    cout<<"The sum of number is "<<add1(3,6)<<endl;
    cout<<"The sum of number is "<<add1(3,6,9)<<endl;

    

    return 0 ;
}