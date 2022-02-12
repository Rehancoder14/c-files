#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your Num:\n";
    cin>>num;

    for (int i=1; i<11; i++){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }


    return 0 ;
}