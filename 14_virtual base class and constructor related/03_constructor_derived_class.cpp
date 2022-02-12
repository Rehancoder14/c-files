#include <iostream>
using namespace std;
class base1
{
    int data1;
    public:
        base1(int i){
        data1 = i;
        cout<<"Base class constructor called "<<endl;
    }
    void printdata1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
        base2(int j){
        data2 = j;
        cout<<"Base class constructor called "<<endl;
    }
    void printdata2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class derived: public base1, public base2{
    int der1, der2;
    public:
        derived(int a,int b, int c, int d): base1(a),base2(b){
            der1 = c;
            der2 = d;
            cout<<"Derived class constructor called "<<endl;
        }
        void get_data(void){
            printdata1();
            printdata2();
            cout<<"the value of der1 is "<<der1<<endl;
            cout<<"the value of der2 is "<<der2<<endl;
        }
        
            
            
        
};
int main() {
    derived Rehan(2,4,6,8);
    Rehan.get_data();

    return 0 ;
}