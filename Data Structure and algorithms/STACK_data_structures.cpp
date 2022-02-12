#include <iostream>
using namespace std;
#define n 10
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr= new int[n];
        top = -1;
    }
    void push(int x){
        if(top ==n-1){
            cout<<"Sorry bro! NO space"<<endl;
        }
        top++;
        arr[top]= x;
    }
    void pop(){
        if(top==-1){
            cout<<"NO elements to pop ";
        }
        top--;

    }
    int Top(){
        if(top==-1){
            cout<<"NO elements to pop ";
        }
        return arr[top];
    }
    bool empty(){
        return top=-1;
    }

};
int main() {
    stack arr;
    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.push(40);
    cout<<arr.Top()<<endl;
    arr.pop();
    cout<<arr.Top()<<endl;
    
    cout<<arr.empty()<<endl;
    

    return 0 ;
}