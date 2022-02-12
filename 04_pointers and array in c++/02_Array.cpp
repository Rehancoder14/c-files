#include <iostream>
using namespace std;

int main() {
    // int marks[4] = {90,98,94,89};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

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
    




    return 0 ;
}