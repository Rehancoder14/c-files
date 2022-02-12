#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] ={45, 6,23,122, 87,90};
    sort(arr,arr+6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0 ;
}