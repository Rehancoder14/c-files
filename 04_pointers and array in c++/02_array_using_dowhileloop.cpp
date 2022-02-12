#include <iostream>
using namespace std;

int main() {
    int marks[] = {90,98,94,89};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    int i = 0;
    do{
        cout<<marks[i]<<endl;
        i++;
    }while(i<4);

    return 0 ;
}