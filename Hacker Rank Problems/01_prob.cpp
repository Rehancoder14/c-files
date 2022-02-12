#include <iostream>
#include <string>
using namespace std;

class student{
    int age, standard;
    string f_name, l_name;
    public:
        void set_data(int a, string name1, string name2, int b){
            age = a;
            f_name = name1;
            l_name = name2;
            standard = b;
        }
        void get_data(void){
            cout<<age<<endl;
            cout<<l_name<<", "<<f_name<<endl;
            cout<<standard<<"\n"<<"\n";
            cout<<age<<","<<f_name<<","<<l_name<<","<<standard<<endl;
        }
};
int main() {
    int agenum, standnum;
    string first, last;
    cin>>agenum>>first>>last>>standnum;

    student Rehan;
    Rehan.set_data(agenum, first, last,standnum);
    Rehan.get_data();

    return 0 ;
}