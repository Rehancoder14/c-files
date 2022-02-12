#include <iostream>
using namespace std;

string reversename(string first_name,string last_name){
    string name = first_name;
    first_name = last_name;
    last_name = name;
}
int main(){
    string name1, name2;
    cout<<"Enter Your first name : "<<endl;
    cin>>name1;
    cout<<"Enter Your second name : "<<endl;
    cin>>name2;
    
    cout<<"The name of the user is "<<reversename(name1, name2)<<endl;

    return 0 ;
}