#include <iostream>
using namespace std;

int sum(int D, int N){
    D = D*N;
    int num = (D*(D+1))/2;
    return num;
    
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int d;
        cin>>d;
        
        cout<<sum(tot);
    }
    

    return 0;
}