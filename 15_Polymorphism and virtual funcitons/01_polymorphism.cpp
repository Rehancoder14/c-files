#include <iostream>
using namespace std;
class base{
    public:
        int var1;
        void display(void){
            cout<<"Displaying base class. "<<endl;
            cout<<"The value of var1 is "<<var1<<endl;
        }
};
class derived : public base{
    public:
        int var2;
        void display(void){
            cout<<"Displaying derived class. "<<endl;
            cout<<"The value of var2 is "<<var2<<endl;
        }
};
int main() {
    

    base_class_pointer->var1 = 14;
    base_class_pointer ->var1 = 100;
    base_class_pointer->display();

  
    derived_class_pointer -> var1 = 500;
    derived_class_pointer->display();

    return 0 ;
}