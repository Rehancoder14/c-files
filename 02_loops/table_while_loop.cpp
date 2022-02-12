#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your Num:\n";
    cin>>num;

    int i = 1;
    while(i<11){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    


    return 0 ;
}