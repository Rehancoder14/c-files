#include <iostream>
using namespace std;

// typedef struct employee //typedef can reduce your code 
// {
//     int eid;
//     char favchar;
//     float salary;
// }rs;

union money //union is for better memory management
//only one the below give datatypes can be  used without losing a memory
{
    int rice;
    char car;
    float pound;
};

int main() {
    union money m1;//in union  only one value can be used at a time;
    m1.pound=20.02;
    cout<<"the value is "<<m1.pound;

  

    return 0 ;
}