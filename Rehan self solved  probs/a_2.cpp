// C++ Program to convert inches into yard, feet 
#include <iostream>
using namespace std;

double convoyard(double a){
    double b= (a/36);
    return b;
}
double convofeet(double a){
    double c = (a/12);
    return c;
}
int main() {
    // int inch;
    // cin>>inch;
    cout<<"The length in yard is "<<convoyard(1)<<endl;
    cout<<"The length in feet is "<<convofeet(1)<<endl;
    

    return 0 ;
}

