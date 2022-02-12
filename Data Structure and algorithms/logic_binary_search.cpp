#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
    int s= 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            e = mid-1;
            return e;
        }
        else{
            e = mid+1;
            return e;
        }
    }
}

int main(){
    int n;
    cout<<"Enter num ";
    cin>>n;
    int arr[n];
    cout<<"enter the value in array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key: "<<endl;
    cin>>key;
    cout<<binary_search(arr,n, key)<<endl;
    

    return 0;
}