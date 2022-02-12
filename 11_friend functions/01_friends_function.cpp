#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //friend function allow to make this below function part of private member
    friend complex sumcomp(complex o1, complex o2);
    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
    complex sumcomp(complex o1, complex o2)
    {
        complex o3;
        o3.setnum((o1.a + o2.a), (o1.a + o2.b));
        return o3;
    }
};
int main()
{
    complex num1, num2, sum;
    num1.setnum(5, 4);
    num1.printnum();

    num2.setnum(6, 5);
    num2.printnum();

    sum.sumcomp(num1, num2);
    sum.printnum();

    return 0;
}

/*properties of friend function
1. Not in the scope of class
2. Since it is not in the scope of class it cannot be called from the object of class. c1.sumcomp()== invalid
3. can be invoked without the help of any object
4. usually contains the objects as argument
5. can declared inside or outside of the private member of class.
6.

*/