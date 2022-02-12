#include <iostream>
using namespace std;
template <class t1, class t2 >
float average(t1 a, t2 b){
    float avg =  (a+b)/2.0;
    return avg;
}
int main() {
    cout<<"The average of two number is "<<average(5.6, 4.2);

    return 0 ;
}
