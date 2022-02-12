#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {
        54,
        65,
        34,
        54,
        4,
        66
    };
    int first= INT_MIN , second = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] <first)
        {
            second = arr[i];
        }
    }
    cout<<"the second highest number in array is "<<second<<endl;
    

    return 0 ;
}