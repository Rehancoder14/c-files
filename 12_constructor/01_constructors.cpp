#include <iostream>
using namespace std;
//constructor  is special member function with the same name as of the class. It is automatically invoked
// It is used to initialize the object of the class.
class complex
{
    int a, b;

public:
    complex(void); //constructor declaration
    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex::complex(void) //This is default constructor and this does not take any parameter
{
    a = 10; //if we don't set the value of a and b we will get the random garbage value as an output.
    b = 5;
}
int main()
{
    complex s1, s2, s3;
    s1.printnum();
    s2.printnum();
    s3.printnum();

    return 0;
}