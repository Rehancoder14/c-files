#include <iostream>
using namespace std;

class Employee{
    int emp1, emp2,emp3;
    public:
    int emp4, emp5;

    void setdata(int a1 ,int b1 , int c1);
    void getdata(void){
        cout<<"The id of emp1 is "<<emp1<<endl;
        cout<<"The id of emp2 is "<<emp2<<endl;
        cout<<"The id of emp3 is "<<emp3<<endl;
        cout<<"The id of emp4 is "<<emp4<<endl;
        cout<<"The id of emp5 is "<<emp5<<endl;
    }

};
void Employee:: setdata(int a1, int b1 , int c1){
    emp1 =  a1;
    emp2 =  b1;
    emp3 = c1;
}

int main() {
    Employee team;
    team.emp4= 4;
    team.emp5 = 5;
    team.setdata(1,2,3);
    team.getdata();
    

    return 0 ;
}