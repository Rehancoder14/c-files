//dynamic initializing  of the constructor through the object
#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interest;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interest = r;
    returnvalue = principal;

    returnvalue = 0;
    for (int i = 0; i < y; i++)
    {
        float returnvalue = returnvalue * (1 + r);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interest = float(r) / 100;
    returnvalue = principal;

    
    for (int i = 1; i < y; i++)
    {
        int returnvalue = returnvalue * (1 + r);
    }
}

void bankdeposit ::show()
{
    cout << endl
         << "The principal amount was ₹ " << principal << endl
         << "Return value after " << years << " years is " << returnvalue;
}
int main()
{
    bankdeposit bankdep1;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p, y and r respectively : " << endl;
    cin >> p >> y >> r;

    bankdep1 = bankdeposit(p, y, r);

    bankdep1.show();

    return 0;
}