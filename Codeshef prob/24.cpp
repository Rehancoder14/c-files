#include <iostream>
using namespace std;
// Denomination problem of small notes
int main(){
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int denom[]= {100,50,10,5,2,1},N,ans=0;
        cin>>N;
        for (int j=0; j < 6; j++)
        {
            ans += N/denom[j];
            N %= denom[j];
        }
        cout<<ans<<endl;
        
    }
    
    
    return 0;
}