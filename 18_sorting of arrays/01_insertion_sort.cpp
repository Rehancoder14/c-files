#include <iostream>
using namespace std;

int main() {
    int arr[7]= {90,89,37,12,65,80,45};
    for(int i= 0; i<6;i++){
        for(int j = i+1;j<7;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
            }
        }
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0 ;
}