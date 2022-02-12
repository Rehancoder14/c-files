#include <iostream>
using namespace std;
//Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomp(complex, complex);

};
class complex
{
    int a, b;
    friend int calculator ::sumrealcomplex(complex o1, complex o2);
    friend int calculator :: sumcomp(complex o1, complex o2);
//here function are declare individually
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum(void)
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
} 
int calculator::sumcomp(complex o1 , complex o2 ){
    return (o1.b + o2.b);
}

//Here in this program funtion of one class is performing it's function for the other class.
int main()
{
    complex o1, o2;
    o1.setnumber(2, 4);
    o2.setnumber(5, 6);
    calculator calci;
    int res = calci.sumrealcomplex(o1, o2);
    cout << "The sum of real part of complex number is " << res << endl;
    int res1 = calci.sumcomp(o1,o2);
    cout<<"The sum of complex part of complex number is "<<res1<<endl;
    return 0;
}

// You can make whole class in friend function just by doing following days
// friend class calculator;