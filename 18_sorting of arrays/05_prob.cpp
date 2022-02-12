#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {
        54,
        65,
        34,
        55,
        4,
        66
    };
    
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        cout<<"The four greatest number among the list are "<<arr[i]<<" ";
    }
    
    
    return 0 ;
}