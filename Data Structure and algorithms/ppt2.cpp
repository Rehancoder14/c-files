#include <iostream>
using namespace std;

int main(){
    for (int i = 5; i >= 1; i--)
    {
        for(int j=i; j>=1; j--){
            if((i+j)%2==0){
                cout<<" 1";

            }
            else{
                cout<<" 0";
            }
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
