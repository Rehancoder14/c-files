#include <iostream>
using namespace std;

class base{
    int a1;
    public:
        int a2;
        
        void setdata(void);
        int getdata();

};
void base :: setdata(void){
    a1 = 20;
    a2 = 10;
}
int base:: getdata(){
    return a1;
}
class derived : public base{
    int product;
    public:
        void process();
        void display();

};
void derived :: process(){
    product = getdata() * a2;

}
void derived :: display(){
    cout<<"The value of a1 is "<<getdata()<<endl;
    cout<<"The value of a2 is "<<a2<<endl;
    cout<<"The product is "<<product<<endl;
}
int main() {
    derived Rehan;
    Rehan.setdata();
    Rehan.process();
    Rehan.display();
    

    return 0 ;
}