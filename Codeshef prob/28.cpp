#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int n;
        bool prime = 1;
        cin>>n;
        for (int j =2; j < sqrt(n); j++)
        {
            if (n%j==0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
        
        
    }
    
    return 0;
}