#include <iostream>
using namespace std;
float temp(int fahrenheit){
    float tempincel =  ((fahrenheit - 32)*(5/9));
    return tempincel;
}
int main() {
    int temp_fahr;
    cout<<"Enter temp: "<<endl;
    cin>>temp_fahr;

    cout<<"The temperature in fahrenheit is "<<temp_fahr<<endl;
    cout<<"The temperature in celcius is "<<temp(temp_fahr)<<endl;
    

    return 0 ;
}