#include <iostream>
using namespace std;
class cap2; //forward declaration or showing the existence of class
class cap1{
    int val;
    friend void exchange(cap1 & , cap2 &);
    public:
        void indata(int a){
            val = a ;
        }
        void display(void){
            cout<<val<<endl;
        }
};
class cap2{
    int val2;
    friend void exchange(cap1 & , cap2 &);
    public:
        void indata(int b){
            val2 = b ;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
void exchange(cap1 & X, cap2 & Y){//values won't be swap if & is removed
    int temp= X.val;
    X.val = Y.val2;
    Y.val2 = temp;
}
int main() {
    cap1 oc1;
    cap2 oc2;

    oc1.indata(5);
    oc2.indata(4);
    exchange(oc1, oc2);

    cout<<"The value of cap1 after exchanging becomes : " <<endl;
    oc1.display();
    cout<<"The value of cap2 after exchanging becomes : "<<endl ;
    oc2.display();
    

    return 0 ;
}