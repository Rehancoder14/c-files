#include <iostream>
using namespace std;

int main() {
    int n1,n2, n3, n4;
    cout<<"Enter first num : "<<endl;
    cin>>n1;
    cout<<"Enter second num : "<<endl;
    cin>>n2;
    cout<<"Enter third num : "<<endl;
    cin>>n3;
    cout<<"Enter fourth num : "<<endl;
    cin>>n4;
    int total = n1 + n2 + n3 + n4;
    cout<<"The total of four number is "<<total<<endl;
    cout<<"The average of four number is "<<total/4<<endl;

    return 0 ;
}