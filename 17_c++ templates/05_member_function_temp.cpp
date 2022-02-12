#include <iostream>
using namespace std;
template <class T>
class myclass{
    public:
    T data;
    myclass(T a){
        data = a;
    }
    void display(void);
};
template <class T>
void myclass <T> :: display(void){
    
        cout<<data<<endl;
    }
template <class T>
void func(T typed){
    cout<<"I am using first func() "<<typed<<endl;
}

int main() {
    myclass <char> R('R');
    R.display();
    myclass <int> data1(98);
    data1.display();

    myclass <float> obj(45.65);
    obj.display();
    func(5);
    func('c');

    return 0 ;
}