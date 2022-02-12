#include <iostream>
using namespace std;


int main(){
    float a = 14.02F;
    long double b = 14.02L;
//these both above mention are double 
// if we need to send this value as a float we are supposed to put f at the  end of the literal

    cout<<"The size of 14.02 is "<<sizeof(14.02)<<endl;
    cout<<"The size of 14.02 is "<<sizeof(14.02F)<<endl;
    cout<<"The size of 14.02 is "<<sizeof(14.02L)<<endl;
    cout<<"The size of 14.02 is "<<sizeof(14.02f)<<endl;
    cout<<"The size of 14.02 is "<<sizeof(14.02l)<<endl;
    
    
    return 0;
}
