#include <iostream>
using namespace std;
class shop{
    int id,code ;
    float price;
    public:
        void setdata(int a, float b,int c){
            id = a;
            price = b;
            code = c;
        }
        void getdata(void){
            cout<<"The code of this item is "<<id<<endl;
            cout<<"The price of this item is "<<price<<endl;
        }
        void need(void){
            cout<<"code of this item is "<<code<<endl;
            cout<<"Thankyou 😄😃"<<endl;
        }
};

int main() {
    int size=4;
    
    shop *ptr = new shop[size]; 
    shop *ptrTemp = ptr;
    shop *ptrTemp1 = ptr;
    int p, r, i;
    float q;
    for (int i = 0; i < size ; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q>>r;
        ptr->setdata(p,q,r);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item no : "<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    for (int i = 0; i < size; i++)
    {
        
        cout<<"greets "<<endl;
        
        ptrTemp1->need();
        ptrTemp1++;
    }
    
 
    //here substitution of side can be the number of data we need to store
    //suppose 2 data are supposed to store the line of code will be shop *ptr = new shop[2]
    
    return 0 ;
}