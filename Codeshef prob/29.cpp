#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string arr[]= {"Battleship","Cruiser","Destroyer","Frigate"};
        char a ;
        cin>>a;
        if (a=='B'||a=='b')
        {
            cout<<arr[0]<<endl;
        }
        else if (a=='C'||a=='c')
        {
            cout<<arr[1]<<endl;
        }
        else if(a=='D'||a=='d'){
            cout<<arr[2]<<endl;
        }
        else if(a=='F'||a=='f')
        {
            cout<<arr[3]<<endl;
        }
        else{
            cout<<"Invalid character";
        }
        
        
        
    }
    
    return 0;
}