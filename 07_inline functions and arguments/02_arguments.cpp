#include <iostream>
using namespace std;

float money_received(int current_money, float interest_rate=1.08){
    return current_money*interest_rate;
}
int main() {
    int money= 100000;
    cout<<"you have "<<money<<" rs in your bank account. And  you will after the interest it will be\n"<<money_received(money,1.08);

    return 0 ;
}