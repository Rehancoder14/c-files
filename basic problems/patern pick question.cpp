#include <iostream>
using namespace std;

int main() {
    int columns;
    cout<<"Enter the columns: "<<endl;
    cin>>columns;
    int rows;
    cout<<"Enter the rows: "<<endl;
    cin>>rows;
    for (int i = 0; i < columns; i++)
    {
        for (int j= 0; j< rows; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        
    }
    

    return 0 ;
}