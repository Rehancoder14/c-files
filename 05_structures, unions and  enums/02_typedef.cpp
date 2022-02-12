#include <iostream>
using namespace std;
typedef struct employee //typedef can reduce your code 
{
    int eid;
    char favchar;
    float salary;
}rs;

int main() {
    rs rehan; //this rs is due to typedef keyword
    rehan.eid= 1;
    rehan.favchar = 'r';
    rehan.salary = 50000000;
    cout<<"The value is "<<rehan.eid<<endl;
    cout<<"The value is "<<rehan.favchar<<endl;
    cout<<"The value is "<<rehan.salary<<endl;
    cout<<rehan.salary;

    rs sid;
    sid.eid = 2;
    sid.favchar = 's';
    sid.salary = 1200000;
    cout<<sid.eid<<endl;
    cout<<sid.favchar<<endl;
    cout<<sid.salary<<endl;
    
    
    

    return 0 ;
}