#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int p;
        cin>>p;
        int menuitems = 0;
        for (int i = 11; i >=0 ; i--)
        {
            int currpower = pow(2,i);
            while(p>=currpower){
                p-=currpower;
                menuitems++;
                
            }
        }
        cout<<menuitems<<endl;
    }
    
    
    return 0;
}