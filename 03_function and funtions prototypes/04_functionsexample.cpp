#include <iostream>
using namespace std;

int addnum(int a, int b){
    int c = a + b;
    return c;
}
int main() {
    int num1=5, num2= 4;
    cout<<"the sum of "<<num1<<" and "<<num2<<" is "<<endl;
    cout<<addnum(num1,num2);
    

    return 0 ;
}