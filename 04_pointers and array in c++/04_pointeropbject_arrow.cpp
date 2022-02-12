#include <iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
        void getdata(void){
            cout<<"The value of real is "<<real<<endl;
            cout<<"The value of imaginary is "<<imaginary<<endl;
        }
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main() {
    // complex cap;
    // complex *ptr = &cap;
    complex *ptr = new complex;
    // (*ptr).setdata(5,6);
    ptr->setdata(6,7);  //arrow make the pointer d-reference
    (*ptr).getdata();
    return 0 ;
}