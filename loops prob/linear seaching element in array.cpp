#include <iostream>
using namespace std;

int linear_search(int arr[], int n){
    
    for (int i = 0; i <= n ;  i++)
    {
        if (n==arr[i])
        {
            cout<<i;
        }
        
    }
    
}
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cout<<"Enter the number which you want to find: ";
    cin>>t;
    linear_search(arr ,n );

    return 0;
}