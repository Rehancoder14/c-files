#include <iostream>
using namespace std;
void linear_search(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]== key)
        {
            cout<<"integer is present at index "<<i<<endl;
        }
        
    }
    
}
int main(){
    int n;
    cout<<"enter the lenth of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value you want to find : ";
    cin>>key;
    linear_search(arr,n,key);
    
    return 0;
}