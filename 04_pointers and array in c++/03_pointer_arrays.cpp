#include <iostream>
using namespace std;

int main() {
    int mathsmarks[4] = {99,88,86,82};
    cout<<mathsmarks[0]<<endl;
    mathsmarks[1]= 77;//this line of code will change the marks according to our will with just substituting  the another value
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<mathsmarks[i]<<endl;
    }

    int *p= mathsmarks;
    cout<<"The value of marks() is "<< *p<<endl;
    cout<<"The value of marks() is "<< *(p+1)<<endl;
    cout<<"The value of marks() is "<< *(p+2)<<endl;
    cout<<"The value of marks() is "<< *(p+3)<<endl;
    cout<<"The value of marks() is "<< *(p+4)<<endl;
 
    return 0 ;
}