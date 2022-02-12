#include <iostream>
using namespace std;

int main(){
    int arr[]= {4,5,6,7,10};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum+ arr[i];
    }
    cout<<"The sum of the numbers in array is: "<<sum;

    
    return 0;
}