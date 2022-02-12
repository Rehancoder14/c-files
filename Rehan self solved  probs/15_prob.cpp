#include <iostream>
using namespace std;

float speed(float kmphr){
    float miles = kmphr/1.609;
    return miles;
}


int main() {
    cout<<"speed in miles per hour is "<<speed(25)<<endl;


    return 0 ;
}