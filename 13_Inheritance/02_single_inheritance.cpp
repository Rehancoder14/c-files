#include <iostream>
using namespace std;

class base
{
    int data1; //this is private by default and is not inheritable.
public:
    int data2;
    void setdata();
    int getdata1();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{ //This will call the private member i.e. data 1

    return data1;
}

class Derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * getdata1();
}
void Derived ::display()
{
    // cout<<"The main id is "<<data1<<endl >>>>>>> This Line will throw an error as data1 belongs to private member
    cout << "The value of data 1 is " << getdata1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{

    Derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}