#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    bool flag=0;
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num%i==0)
        {
            cout<<"non-prime";
            flag = 1;
            break;
        }
        
    }
    if (flag==0)
    {
        cout<<"prime"<<endl;
    }
    
    

    return 0 ;
}