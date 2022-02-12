#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {
    5,
    4,
    9,
    12,
    8
  };
    sort(nums, nums+5);
    
    cout<<nums[1];
    

    return 0 ;
}