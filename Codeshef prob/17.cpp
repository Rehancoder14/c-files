#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin>>a>>b;
        if (a>b)
        {
            cout<<">"<<endl;
        }
        else if(a<b){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
        
    }
    

    return 0 ;
}