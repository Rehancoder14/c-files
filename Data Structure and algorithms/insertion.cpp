#include <iostream>
using namespace std;


void display(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
void inserting(int arr[],int size,int element,int capacity, int index){
    if(size>= capacity){
        return -1;
    }
    for (int i = size-1; i <5; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[index]= element;
    return 1;
    
}  
}
int main() {
    int arr[100]={90,98,84,93};
    int size = 4, element = 45;
    display(arr,size);
    inserting(arr, size , element,100, index);
    
    return 0 ;
}