#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Your Num :" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "The number you have entered is positive number." << endl;
    }
    else if (num < 0)
    {
        cout << "The number you have entered is negative number." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }

    return 0;
}