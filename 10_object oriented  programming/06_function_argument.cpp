#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setid(void){
            salary = 56000000;
            cout<<"Enter Id of Employee: "<<endl;
            cin>>id;

        }
        void getid(void){
            cout<<"The id of this employee is "<<id<<endl;
        }
};
int main() {
    // Employee Rehan, John, Randy;
    // Rehan.setid();
    // Rehan.getid();
    // John.setid();
    // John.getid();
    // Randy.setid();
    // Randy.getid();
    Employee emp[4];
    for (int i = 0; i < 4 ; i++)
    {
        emp[i].setid();
        emp[i].getid();
    }
    
    

    return 0 ;
}