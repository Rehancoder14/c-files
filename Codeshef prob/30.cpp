#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    int n;
    cin>>n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }


    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr2[j])
            {
                cout<<arr[i]<<" ";
            }
            
            
        }
         
           
    }
    
   
    return 0 ;
}