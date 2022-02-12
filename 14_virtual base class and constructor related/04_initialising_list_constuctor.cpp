#include <iostream>
using namespace std;
class test {
    int a, b;
    public:
        // test(int p,int q): a(p),b(q)
        // test(int p,int q): a(p),b(a)  //This will not throw an error as value"a " is present there
        test(int p,int q): a(p),b(q+p){ // here a and b can be written in the curly bracket as well
            cout<<"constructor initializing "<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
        }
};
int main() {
    test rehan(5,6);
    

    return 0 ;
}