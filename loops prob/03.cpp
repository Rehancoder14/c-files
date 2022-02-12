#include <iostream>

using namespace std;

void prime(int n){
    if (n<=1)
    {
        cout<<"false";
    }
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
        
    }
    
    
}
int main(){

    int t;
    cout<<"Enter Your number : ";
    cin>>t;
    prime(t);

    return 0;
}