// C++ Program to Convert Days Into Years, Weeks and Days
#include <iostream>
using namespace std;

int main() {
    int year , day, week;
    cout<<"Enter no of days: "<<endl;
    cin>>day;
    year = day / 365;
    day = day%365;
    week = day/7;
    day = day%7;

    cout<<"year "<<year<<endl;
    cout<<"week"<<week<<endl;
    cout<<"day "<<day<<endl;

    


    return 0 ;
}

// C++ Program to calculate sum and average of three numbers