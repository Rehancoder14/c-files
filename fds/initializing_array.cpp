// Initializing the __ARRAY
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    
    
    return 0;
}
