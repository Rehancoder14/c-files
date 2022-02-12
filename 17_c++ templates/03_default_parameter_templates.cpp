#include <iostream>
using namespace std;
template <class  t1 = int , class t2= char >
class mainclass {
    public:
        t1 n1;
        t2 n2;
        mainclass(t1 r, t2 s){
            n1 = r;
            n2 = s;

        }
        void display(void){
            cout<<"The value of a and b is "<<n1<<" and "<<n2<<" respectively."<<endl;
        }
};
int main() {
    mainclass <> rehan(98, 'Z');
    rehan.display();
    mainclass<int , char> alex(95, 'T');
    alex.display();

    return 0 ;
}