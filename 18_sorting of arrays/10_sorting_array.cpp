//selection method for sorting

#include <iostream>
using namespace std;

int main() {
    
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>arr[i];
    // }
    int arr[] = {45, 6,23,122, 87,90};
    for (int i = 0; i <4; i++)
    {
        for (int j = 6; i < 5; j++)
        {
            if(arr[j]> arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    


    return 0 ;
}