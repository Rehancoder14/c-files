#include <iostream> 
using namespace std;

int main(){
    int t, p1,p2,a, lead = 0, winner;
    cin>>t;
    int sum1=0, sum2=0;
    
    for (int i = 0; i < t; i++)
    {
        cin>>p1>>p2;
        sum1 +=p1;
        sum2 +=p2;
        if (sum1>sum2)
        {
            a = sum1- sum2;
            if (a>lead)
            {
                lead = a;
                winner=1;
            }
            
        }
        else{
            a = sum2-sum1;
            if (a>lead)
            {
                lead = a;
                winner=2;
            }
        }
       
    }
    cout<<winner<<" "<<lead<<endl;
    
    return 0;
}