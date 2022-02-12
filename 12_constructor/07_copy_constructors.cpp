#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    } //It's necessary to make the default constructor otherwise it will show an error
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        a = obj.a;
    }

void display()
{
    cout << "The number of objects is " << a << endl;
}
};

int main()
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();
    
    return 0;
}