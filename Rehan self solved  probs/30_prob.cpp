#include <iostream>
#include <cmath>
using namespace std;
class date{
    int day,month,year;
    public: 
        void setdata(int a, int b, int c){
            day = a;
            month = b;
            year = c;
        }
        void display(void);
           
};
void date:: display(void){
    if (day<32 && month<13 && year>2020){
        cout<<"Today, the date is "<<day<<"/"<<month<<"/"<<year<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}
int main(){
    int t_day, t_mon, t_year;
    cout<<"Enter day: ";
    cin>>t_day;
    cout<<"Enter month: ";
    cin>>t_mon;
    cout<<"Enter year: ";
    cin>>t_year;
    date today;
    today.setdata(t_day,t_mon, t_year);
    today.display();
    
    return 0;
} 