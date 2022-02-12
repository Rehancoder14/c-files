#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int salary;
        cin>>salary;
        float sal = (float)sal;
        float hra;
        float da;
        float gross_salary;
        
        if (sal<1500)
        {
            hra = sal/10;
            da = sal*90/100;
            gross_salary = (sal+ da + hra);
            
            cout<<gross_salary<<endl;

        }
        else{
            hra = 500;
            da = (sal*98/100);
            gross_salary = (sal + da + hra);
            cout<<gross_salary<<endl;
        }
        
    }
    
    return 0;
}
