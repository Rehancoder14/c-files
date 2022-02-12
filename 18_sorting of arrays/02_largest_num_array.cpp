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
    
    int max = nums[0];
    for (int i = 0; i < 5 ; i++)
    {
        if (nums[i]>max){
            max = nums[i];
        }
    }
    
  cout << "\nLargest element of the said array: "<<max<<endl;
  return 0;
}