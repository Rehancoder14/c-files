#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int num;
        bool flag = 0;
        cin>>num;
        for (int  j = 2; j < sqrt(num); j++)
        {
            if(num%j==0){
                cout<<"no"<<endl;
                flag =1;
            }
        }
        if (flag ==0)
        {
            cout<<"yes"<<endl;
        }
    }
    
    
    
    return 0;
}