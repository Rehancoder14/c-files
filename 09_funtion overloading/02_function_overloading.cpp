#include <iostream>
using namespace std;
// functions can be overloaded
// it can take the arguments accordingly

int volume(double r , int h){
    return (3.14 * r*r*h);

}
int volume(int a, int b, int c){
    return a*b*c;
}

int volume(int a){
    return (a*a*a);
}

//Here it will match the arguments and operates itself
int main() {
    cout<<"The volume of cylinder is "<<volume(10 ,10)<<endl;
    cout<<"The volume of triangle is "<<volume(3,4,7)<<endl;
    cout<<"The volume of cube is "<<volume(5)<<endl;

    
    return 0 ;
}