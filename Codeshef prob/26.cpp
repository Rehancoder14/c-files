#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int arr[] = {45,34,90,87,33};
    sort(arr,arr+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The k largest element of array are "<<endl;
    int k;
    cin>>k;
    for (int i =0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    return 0;
    }

    