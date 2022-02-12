#include <iostream> 
using namespace std;

void linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            cout<<"Given value is at index "<<i<<endl;
        }
        
    }
  
    
} 
int main(){

    int arr[7];
    int key;
    cout<<"Enter the value"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    

    cout<<"Enter key ";
    cin>>key;
    linearsearch(arr,7,key);
    
    return 0 ;
}