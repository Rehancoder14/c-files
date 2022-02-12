#include <iostream>
using namespace std;

int angle(int a, int b){
    int lastangle = (180 - a - b);
    return lastangle;
}
int main() {
    int angle1, angle2;
    cout<<"Enter 1st angle : "<<endl;
    cin>>angle1;
    cout<<"Enter 2nd angle : "<<endl;
    cin>>angle2;

    cout<<"The third angle is "<<angle(angle1,angle2)<<endl;

    

    return 0 ;
}