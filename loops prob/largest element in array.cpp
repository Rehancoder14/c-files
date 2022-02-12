#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int max = 0;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
            max= arr[i];
        }        
    }
    cout<<"Largest number in the array is: "<<max;
    
    
    
    return 0;
}