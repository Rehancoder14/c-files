#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    bool flag=0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            cout<<"not prime"<<endl;
            flag=1;
        }

    }
    if (flag==0)
    {
        cout<<"Prime"<<endl;
    }
    
    

    return 0;
}