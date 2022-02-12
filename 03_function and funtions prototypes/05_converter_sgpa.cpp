#include <iostream>
using namespace std;

int percentage(float sgpa){
    float percen = (sgpa*10)-7.5;
    return percen;

}
int main() {
    float Your_sgpa;
    cout<<"Enter Your SGPA : "<<endl;
    cin>>Your_sgpa;

    cout<<"Your percentage is "<<percentage(Your_sgpa)<<endl;


    return 0 ;
}