#include <iostream>
using namespace std;

class simple_calci{
    float a, b;
    public:
        
        void setdata(float, float );
        
        float addnum(void);
        float subnum(void);
        float mulnum(void);
        float divnum(void);

};
void simple_calci ::setdata(float n1, float n2){
    a = n1;
    b = n2;
}


float simple_calci:: addnum(void){
    return (a+b);
}
float simple_calci:: subnum(void){
    return (a-b);
}
float simple_calci :: mulnum(void){
    return (a*b);
}
float simple_calci:: divnum(void){
    return (a/b);
}

class calci :public simple_calci{
    char c;
    public:
        void disp1(char d);
        void res(void);
        
};
void calci :: disp1(char d){
    c = d;
}

void calci :: res(void){
    switch (c )
    {
    case '+':
        cout<<"The addition of num1 and num2 "<<addnum()<<endl;
        break;
    case '-':
        cout<<"The substraction of numbers is "<<subnum()<<endl;
        break;
    case '*':
        cout<<"The multiplication of numbers is "<<mulnum()<<endl;
        break;
    case '/':
        cout<<"The division of numbers is "<<divnum()<<endl;
        break;
    
    default:
        cout<<"Invalid operand"<<endl;
        break;
    }
}     

int main(){
    
    float num1, num2;
    cout<<"Enter num1 and num2 respectively : "<<endl;
    cin>>num1>>num2;
    char z;
    cout<<"Enter operand : "<<endl;
    cin>>z;

    
    calci sel_num;
    sel_num.setdata(num1,num2);
    sel_num.disp1(z);
    sel_num.res();


}

