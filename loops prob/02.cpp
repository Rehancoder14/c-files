#include <iostream>
using namespace std;
int main(){

    int sum = 0;
    for (int i = 0; i <= 500; i++)
    {
        for (int j = 0; j <= 500; j++)
        {
            if(j<i){
                if (i%j==0)
                {
                    sum = sum+j;
                }
                
            }
            
        }
        
       
    }
    
    return 0;
}