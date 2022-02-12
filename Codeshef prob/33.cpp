// find the lcm and gcd of two numbers
#include <iostream>
using namespace std;
long long gcd(long long int a, long long int b)
{
    if (b == 0){
        return a;
    }
    
    return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<endl;
        cout<<gcd(a,b)<<endl;
    }
    

    return 0 ;
}