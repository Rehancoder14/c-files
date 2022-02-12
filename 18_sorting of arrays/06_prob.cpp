// write a program to find the k largest element in array
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int num ;
    cin>>num;
    int arr[num];
    sort(arr, arr+num,greater<int>());
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    int k; 
    cout<<"Enter value of k : ";
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0 ;
}