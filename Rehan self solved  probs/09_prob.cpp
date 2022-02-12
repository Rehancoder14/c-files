#include <iostream>
using namespace std;

int volume(int radius){
    float vol = 1.33*3.14*radius*radius*radius;
    return vol;
}
int main() {
    float rad;
    cout<<"Enter Radius: "<<endl;
    cin>>rad;

    cout<<"The volume of sphere is "<<volume(rad);

    return 0 ;
}