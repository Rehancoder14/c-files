#include <iostream>
using namespace std;

int main() {
    
    int arr[8]= {
        5,
        45,
        65,
        76,
        99,
        45,
        49,
        12
    };
    
    
    int first = 0, second = 0, third = 0;
    for (int i = 0; i < 5; i++)
    {
         if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }

    cout<<"The first second and third largest number in list is "<<first<<" "<<second<<" "<<third<<endl;
    

    return 0 ;
}