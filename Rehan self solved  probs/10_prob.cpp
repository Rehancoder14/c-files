#include <iostream>
using namespace std;

int volume(int length){
    return length*length*length;
}
int main() {
    cout<<"The volume of cube is "<<volume(5)<<endl;

    return 0 ;
}