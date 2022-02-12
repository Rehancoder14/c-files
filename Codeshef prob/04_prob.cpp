#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    
    for (int i = 0; i <n; i++){
        cin>>a;
        int count;
        while (n>0)
        {
            count = count+ (a%10);
            a = a/10;
        }
        cout<<count;
        
    }

    
    
    
    return 0;
}