#include <iostream>
using namespace std;
struct employee
{
    int eid;
    char favchar;
    float salary;
};

int main() {
    struct employee rehan;
    rehan.eid= 1;
    rehan.favchar = 'r';
    rehan.salary = 50000000;
    cout<<"The value is "<<rehan.eid<<endl;
    cout<<"The value is "<<rehan.favchar<<endl;
    cout<<"The value is "<<rehan.salary<<endl;
    cout<<rehan.salary;
    
    

    return 0 ;
}