#include <iostream>
using namespace std;

int main(){
    int num, rem, rev_num = 0;
    cin>>num;
    
    while (num>0)
    {
        rem = num%10;
        cout<<rem;
        num = num/10;
    }
    
    
    return 0;
}