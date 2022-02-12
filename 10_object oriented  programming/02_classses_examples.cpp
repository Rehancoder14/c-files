#include <iostream>
using namespace std;

class bank{
    private:
        int income,rent;
    
    public:
        int expenditure, extra_expense;
        void set(int income1, int rent1);
        void get(){
            cout<<"Your income is "<<income<<endl;
            cout<<"your income from rent is "<<rent<<endl;
            cout<<"your expenditure is "<<expenditure<<endl;
            cout<<"your extra expenses are "<<extra_expense<<endl;
        }
        
};

void bank :: set(int income1, int rent1){
    income =  income1;
    rent =  rent1 ;
}
int main() {
    bank money;
    money.expenditure = 20000;
    money.extra_expense = 5000;
    money.set(60000,40000);
    money.get();


    

    return 0 ;
}