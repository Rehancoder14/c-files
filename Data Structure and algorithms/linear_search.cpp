#include <iostream>
using namespace std;
void linear_search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            cout<<"Given value is at index "<<i<<endl;
        }
        
    }
    
}
int main(){
    int n;
    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number you want to find: ";
    cin>>key;
    linear_search(arr, n, key);
    

    return 0;
}