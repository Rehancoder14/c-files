#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num, sum = 0, rem;
    cout<<"Enter the number: ";
    cin>>num;
    int oldnum = num;
    while (num>0)
    {
        rem = num%10;
        sum = sum+ pow(rem,3);
        num = num/10;
    }
    if (sum==oldnum)
    {
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"not an armstrong number"<<endl;
    }
    return 0;
    
    
}