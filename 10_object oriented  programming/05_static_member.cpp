#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //this static int will have the value of 0.

public:
    void setdata(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the employee is " << id << endl
             << "This employee no is " << count + 1 << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee ::count; //Default value is 0.

int main()
{
    Employee Rehan, Johncena, Randyorton;
    // Rehan.id = 1;    >>>>>>> can't do these step as id and count are the  private function.
    // Rehan.count=1;
    Employee::getcount();
    Rehan.setdata();
    Rehan.getdata();


    Employee::getcount();
    Johncena.setdata();
    Johncena.getdata();

    Employee::getcount();
    Randyorton.setdata();
    Randyorton.getdata();

    return 0;
}