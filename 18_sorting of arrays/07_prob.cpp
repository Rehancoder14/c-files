#include<iostream>
using namespace std;


int main() {
  int nums[] = {
    5,
    4,
    9,
    12,
    8
  };
  
    cout << "Original array:";
    for (int i=0; i < 5; i++) {
        cout << nums[i] <<" ";
    }
    
    int min = nums[0];
    for (int i = 0; i < 5 ; i++)
    {
        if (nums[i]<min){
            min = nums[i];
        }
    }
    
  cout << "\nsmallest element of the said array: "<<min<<endl;
  return 0;
}