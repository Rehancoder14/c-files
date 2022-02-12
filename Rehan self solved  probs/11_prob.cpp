#include <iostream>
using namespace std;

int area(int a , int b){
    return a * b ;

}
int perimeter(int a, int b){
    return (a+b)*2;
}

int main() {
    int length, width;
    cout<<"Enter the length : "<<endl;
    cin>>length;
    cout<<"Enter the width : "<<endl;
    cin>>width;

    cout<<"The area of rectangle is "<<area(length,width)<<endl;
    cout<<"The perimeter of rectangle is "<<perimeter(length,width)<<endl;
    

    

    return 0 ;
}