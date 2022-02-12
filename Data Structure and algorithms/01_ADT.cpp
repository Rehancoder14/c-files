#include <iostream>
using namespace std;
#define n 10
class stack{
    int *arr;
    int top;
    public: 
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push(int x){
        if (top==n-1)
        {
            cout<<"Stack overflow"<<endl;

        }
        top++;
        arr[top]= x;
        
    }
    void pop(){
        
        top--;  
    }
    int Top(){
        if (top==-1)
        {
            cout<<"no elements of Pop"<<endl;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

    void display(){
        cout<<*arr<<" ";
    }
    
};
int main() {
    stack st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(30);
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    return 0 ;
}