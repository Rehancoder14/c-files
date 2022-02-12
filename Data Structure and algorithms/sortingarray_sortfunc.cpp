#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
            return e;
        }
        else{
            e = mid+1;
            return e;
        }

    }
    return -1;
}

int main(){
    int arr[10] = {12,29,7,2,98,37,90,28,9,76};
    // int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int key;
    cout<<"Enter key ";
    cin>>key;

    cout<<binarysearch(arr, 10,key);

    
    
    


    
}