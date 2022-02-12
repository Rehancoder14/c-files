#include <iostream>
using namespace std;

class A{
    int a;
    public:
        // void setdata(int a){
        //     // a = a; will give a garbage value 
        //     this -> a = a;
        // }
        
        
        A & setdata(int b){
            this -> a = a;
            return *this;
        }

       
        void getdata(void){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main() {
    A a;
    a.setdata(5);
    a.getdata();

    return 0 ;
}
//This is a keyword which is pointer which points to the which invokes the function