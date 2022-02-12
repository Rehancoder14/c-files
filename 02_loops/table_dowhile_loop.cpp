#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your Num:\n";
    cin>>num;

    int i = 1;
    do{
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
        i++;
    }
    while(i<11);
    

    return 0;
}