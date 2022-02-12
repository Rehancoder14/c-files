// After post increment by 1 the number is : 58
// After pre increment by 1 the number is : 59
// After increasing by 1 the number is : 60
// After post decrement by 1 the number is : 59
// After pre decrement by 1 the number is : 58
// After decreasing by 1 the number is : 57
#include <iostream>
using namespace std;

int main() {
    int n  =  57;
    cout<<"After post increment by 1 is number is "<<n<<endl;
    n++;
    cout<<"After pre increment by 1 the number is "<<n<<endl;
    ++n;
    cout<<"After increasing by 1 the number is "<<n<<endl;
    n+1;
    cout<<"After post decrement by the 1 the number is : "<<n<<endl;
    n--;
    cout<<"After pre decrement by the 1 the number is "<<n<<endl;
    --n;
    cout<<"After decreasing by the 1 the number is "<<n<<endl;
    n-1;

    return 0 ;
}