#include <iostream>
using namespace std;
// palindrome number  = The number after reversing looks same as num.
int main(){
    int t; 
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int num, rem=0,revnum = 0;
        cin>>num;
        int n = num;
        while (num>0)
        {
            rem = num%10;
            revnum = (revnum* 10)+ rem;
            num = num/10;
            
        }
        if (n == revnum)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;
        }
        
        
        
    }
    
    
    return 0;
}