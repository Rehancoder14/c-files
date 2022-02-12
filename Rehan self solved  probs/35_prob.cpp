#include <iostream>
using namespace std;

int main() {
    int n =3;
    int count = 0;
    for (int i = n; i < 0; i/=2)
    {
        for(int j = n; j<i; j++);{
            count+=1;
        }
    }
    
    return 0 ;
}