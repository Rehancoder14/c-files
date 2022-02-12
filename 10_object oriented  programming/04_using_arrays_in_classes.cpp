// using arrays in class
#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter ID of your item no : " << counter + 1 << endl;
    cin >> itemid[counter];

    cout << "Enter price of your item :" << endl;
    cin >> itemPrice[counter];
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id is " << itemid[i] << "is" << itemPrice[i] << endl;
    }
}
int main()
{
    shop mat;
    mat.initcounter();
    mat.setprice();
    mat.setprice();
    mat.setprice();
    mat.displayprice();

    return 0;
}