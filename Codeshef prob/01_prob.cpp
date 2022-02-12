#include <iostream>
using namespace std;

int main() {
    int X; float Y;
    cin>>X>>Y;
    if ( (X%5==0)&&((X+0.50)<=Y))
    {
        cout<<Y-X-0.50<<endl;
    }
    else{
        cout<<Y<<endl;
    }
    
    return 0 ;
}