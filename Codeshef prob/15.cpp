#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int fact=1;
        
        if (n<=1)
        {
            return fact;
        }
        else
        {
            for (int j = 1; j <n+1; j++)
                {
                    fact = fact*j;
                }
        }
        cout<<fact<<endl;
    }
    
    return 0;
}