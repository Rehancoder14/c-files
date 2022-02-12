// class nesting
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void cache(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter any binary number : " << endl;
    cin >> s;
}

void binary ::cache(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format";
        }
    }
}

void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }

        else
        {

            s.at(i) = '1';
        }
    }
}

void binary ::display(void)
{
    cout << "\nDisplaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.cache();
    b.display();
    b.ones();
    b.display();

    return 0;
}