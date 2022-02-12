#include <iostream>
using namespace std;
class base1{
    public:
        void greet(void){
            cout<<"Hello, How Are You? "<<endl;
        }
};
class base2{
    public:
        void greet(void){
            cout<<"Hola! como estas "<<endl;
        }
};
class derived: public base1, public base2{
    int a;
    public:
        void greet(){
            base2::greet();  //Ambiguity resolution
        }
};
int main() {
   base1 obj1;
   base2 obj2;
   obj1.greet();
   obj2.greet();
   derived d;
   d.greet();

    return 0 ;
}