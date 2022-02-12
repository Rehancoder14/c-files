#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y); //constructor declaration
    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) //this is parameterized constructor as it takes the arguments
{
    a = x; 
    b = y;
}
int main()
{
    complex amp(4,6);
    complex lan= complex(5,7);
    amp.printnum();
    lan.printnum();
   
    return 0;
}