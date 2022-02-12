#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int quantity, cost;
        
        cin>>quantity>>cost;
        double a = quantity*cost*1.00000;
            
        
        if (quantity<1000)
        {
           cout<<a<<endl;
        }
        else{
            double exp = a -(a/10.00000);
            cout<<exp<<endl;
        }
        
        
    }
    
    return 0;
}