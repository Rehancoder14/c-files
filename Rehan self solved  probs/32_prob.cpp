#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[num];
    
    for (int i = 0;i<num; i++){
        cin>>arr[i];
    }

    int min = INT8_MAX;
    for (int i = 0; i < num; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Smallest number in the list is "<<min<<endl;

    
    return 0 ;
}