#include <iostream>
using namespace std;
//destructor neither takes an argument nor returns the value.
int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when the constructor is called for object no."<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when the destructor is called for object no. "<<count<<endl;
            count--;
        }
};
int main() {
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating first object. "<<endl;
    num n1;{
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting the block"<<endl;
        cout<<"Back to the main."<<endl;
    }

    return 0 ;
}