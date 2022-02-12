#include <iostream>
using namespace std;

int main(){
    int num, revnum = 0, rem;
    cout<<"enter the number :";

    cin>>num;
    while (num>0)
    {
        rem = num%10;
        revnum = revnum*10 +rem;
        num = num/10;
    }
    cout<<"The reverse of the given num is "<<revnum<<endl;
    
    return 0;
}