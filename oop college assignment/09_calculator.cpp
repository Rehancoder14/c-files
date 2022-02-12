#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

class sim_calci
{
    int a, b;
    char c;

public:
    void get_data(void)
    {
        cout << "Enter value of a " << endl;
        cin >> a;
        cout << "Enter value of b " << endl;
        cin >> b;
    }
    int addnum(void)
    {
        return a + b;
    }
    int subnum(void)
    {
        return a - b;
    }
    int mulnum(void)
    {
        return a * b;
    }
    int divnum(void)
    {
        return a / b;
    }
    void operand(void)
    {
        cout << "Enter Operand" << endl;
        cin >> c;
    }
    void display(void)
    {
        switch (c)
        {
        case '+':
            cout << "The addition of the given numbers is " << addnum();
            break;
        case '-':
            cout << "The substraction of the given numbers is " << subnum();
            break;
        case '*':
            cout << "The multiplication of the given numbers is " << mulnum();
            break;
        case '/':
            cout << "The division of the given numbers is " << divnum();
            break;

        default:
            cout << "Invalid operand" << endl;
            break;
        }
    }
};

class sci_calci
{
    int x;
    char z;

public:
    void set_data(void)
    {
        cout << "Welcome to the scientific calculator!" << endl;
        cout << "Enter value of a " << endl;
        cin >> x;
        cout << "Enter scientic method among log, tan, sin, sqrt " << endl;
        cin >> z;
        cout << "press L" << endl;
        cout << "press T" << endl;
        cout << "press S" << endl;
        cout << "press R" << endl;
    }
    float lognum(void)
    {
        return log(x);
    }
    float tannum(void)
    {
        return tan(x * PI / 180);
    }
    float sinnum(void)
    {
        return sin(x * PI / 180);
    }
    float rootnum(void)
    {
        return sqrt(x);
    }
    void ans(void)
    {
        switch (z)
        {
        case 'L':
            cout << "log of given number is " << lognum() << endl;
            break;
        case 'T':
            cout << "tan of given number is " << tannum() << endl;
            break;
        case 'S':
            cout << "tan of given number is " << sinnum() << endl;
            break;
        case 'R':
            cout << "tan of given number is " << rootnum() << endl;
            break;

        default:
            cout << "invalid operator" << endl;
            break;
        }
    }
};
class hybrid : public sim_calci, public sci_calci
{
public:
    void sci(void)
    {
        set_data();
        ans();
    }
    void simp(void)
    {
        get_data();
        display();
    }
};
int main()
{
    sci_calci num;
    num.set_data();
    num.ans();
    return 0;
}
