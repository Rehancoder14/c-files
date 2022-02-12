// C++ program to generate random numbers
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int num;
    srand(time(0));
    for (int i = 1; i < 3; i++)
    {
        
        num = rand()%10;
        cout<<num<<endl;
    }
        return 0 ;
}
