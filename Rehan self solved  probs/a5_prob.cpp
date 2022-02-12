// reversing the number 
#include <iostream>
using namespace std;

int main() {
    int n, reverse_num;
    cout<<"Enter a number "<<endl;
    cin>>n;
    while (n!=0)
    {
        reverse_num = reverse_num * 10 +(n%10);
        n /=10;
    }
    cout<<reverse_num<<endl;

    return 0 ;
}