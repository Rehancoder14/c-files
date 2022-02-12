#include <iostream>
using namespace std;
class alex; // this gives the declaration of class alex which is necessary
class Rex{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
    friend void add(Rex, alex);
};
class alex{
    int num;
    public:
        void setvalue(int value){
            num = value;
        
        }
    friend void add(Rex, alex);
};
void add(Rex o1, alex o2){
    cout<<"Summing the datas of Rex and alex "<<o1.data + o2.num<<endl;
}
int main() {
    Rex a1;
    a1.setvalue(5);
    alex b1;
    b1.setvalue(7);

    add(a1,b1);
    

    return 0 ;
}