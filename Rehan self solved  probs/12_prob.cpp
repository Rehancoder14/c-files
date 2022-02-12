#include <iostream>

using namespace std;


//wrong herons formula


int main() {
    int side1, side2, side3;
    cout<<"Enter side 1 : "<<endl;
    cin>>side1;
    cout<<"Enter side 2 : "<<endl;
    cin>>side2;
    cout<<"Enter side 3 : "<<endl;
    cin>>side3;

    double s = (side1 + side2 + side3)/3;
    double area = (s*(s-side1)*(s-side2)*(s-side3))*0.5;
    
    cout<<"The area of rectangle using Heron's formula is "<<area<<endl;

    return 0 ;
}