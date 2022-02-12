#include <iostream>
using namespace std;
int binary_search(int arr[],int key,int n){
    int s= 0; //starting point
    int e = n;//ending point
    while(s<=e){
        int mid = (s+e)/2; //finding midpoint
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s= mid+1;
        }
        return -1;

    }
}
int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the length of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value you want to find in array: ";
    cin>>key;
    cout<<binary_search(arr,key,n);
    
    return  0;
}