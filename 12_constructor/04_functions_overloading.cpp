#include <iostream>
using namespace std;
// Here functions can be overloaded i.e. we can write two constructors.
// It will use the constructor according to the constructor.
class complex
{
    int a, b;

public:
    complex(){
        a = 0;
        b = 0;
    };
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int  x){
        a = x;
        b = 0;
    }
    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
    
};
int main()
{   complex cap1(5,6);
    cap1.printnum();
    complex cap2(5);
    cap2.printnum();
    complex cap3;
    cap3.printnum();
    return 0;
}