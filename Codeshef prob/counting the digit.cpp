#include <iostream>
using namespace std;
int main(){
    int num, dig=0;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        int newnum = num%10;
        dig = dig + newnum;
        num = num/10;

    }
    cout<<dig<<endl;
    
    return 0;
}