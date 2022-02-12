#include <iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
        simple(int a, int b=9){//alloting default value 
            data1 = a;
            data2 = b;
        }
        void printnum()
    {
        cout << data1 << " + " << data2 << "i" << endl;
    }
};
int main() {
    simple s(2,5);//here if the value is not given for int b then  it will take the 
    //default argument  which is  9;
    s.printnum();
    simple s2(4);
    s2.printnum();

    return 0 ;
}