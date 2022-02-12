#include <iostream>
using namespace std;

class base{
    int a,b;
    public:
        base(int y, int z); //default constructor 
            void set_num(void){
                cout<<"The value of a and b is "<<a<<" and "<<b<<" respectively."<<endl;
                cout<<"The addition of a and b is "<<a+b<<endl;
            }
};
base :: base(int y, int z) {
    a = y;
    b = z;
}
class derived: public base{
    int p,q;
    public:
        derived(int e, int f,int r, int s):base(e,f){
            p = r;
            q = s;
        }
            
        void get_num(void){
            cout<<"The value of p and q is "<<p<<" and "<<q<<" respectively."<<endl;
            cout<<"The multiplication of p and q is "<<p*q<<endl;
        }
        void display(void);
};

void derived :: display(void){
    set_num();
    get_num();
}
int main() {
    derived num1(56,44,30,20);
    num1.display();
    

    return 0 ;
}