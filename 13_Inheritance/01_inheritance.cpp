#include <iostream>
using namespace std;

class employee
{ //Base class
    // int id;
    // float salary;
public:
    int id;
    float salary;
    employee(int inpid)
    {
        int id = inpid;
        salary = 34.0; //by default value
    }
    employee(){} //this is default constructor is exponentially made to call itself automatically
};
class programmer : public employee //derived class 
// default visibility mode is always private
//private visibility mode : public members of base class becomes the private members of the derived class
// public visibility mode : public members of base class become the public member of the derived class
{

public:
    programmer(int inpid){
        id = inpid;
        salary = 34.0;
    }
    int languageCode = 9;
    void getdata(){
        cout<<id<<endl;
    }
    void setdata(){
        cout<<salary<<endl;
    }
};

int main()
{
    employee Rehan(1), John(2);
    programmer skillf(1);
    cout<<skillf.languageCode<<endl;
    skillf.getdata();
    skillf.setdata();
    

    return 0;
}

/* Flow :
1) we made the base class i.e class employee 
2) then we made derived class i.e class programmer: employee through visibility mode 

*/
