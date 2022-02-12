

#include <iostream>
using namespace std;


int main(){
    int n, d;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%d==0)
        {
            count = count+1;
        }
        
    }
    cout<<count<<endl;
    
    return 0;
}