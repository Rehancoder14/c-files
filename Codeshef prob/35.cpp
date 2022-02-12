#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int quant, price;
        cin>>quant>>price;
        double totalprice = quant *price ;
        if(quant>1000){
            totalprice= totalprice*0.1;

        }
        cout<<setprecision(10)<<fixed;
        cout<<totalprice<<endl;
    }
    return 0;
}