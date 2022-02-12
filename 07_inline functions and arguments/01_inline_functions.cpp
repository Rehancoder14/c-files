#include <iostream>
using namespace std;


inline int product(int x, int y){
    // static int c=0; //this function just increase the value of c
    // c = c +1;
    return x*y;
   
    
}


// what inline funtion does?
// inline function will execute only once but will be copied for multiple time and will give the output very fast
int main() {
    int a ,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    

    return 0 ;
}