#include <iostream>
using namespace std;

int main(){
    int a[3][3],b[3][3],result[3][3]={0},i,j;
    cout<<"enter first matrix element: "<<endl;

    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<"Enter number in pocket ["<<i<<"]"<<"["<<j<<"]";
            cin>>a[i][j];
        }
    
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
        
    }
    // **************************************************************************************************************
    cout<<"Enter the second matrix element: ";

    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<"Enter number in pocket ["<<i<<"]"<<"["<<j<<"]";
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
        
    }  
    // ***************************************multiplication of matricces*****************************************************
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] = result[i][j] +a[i][j] * a[j][k];
            }
            
        }
        
    }
    cout<<"Multiplication of matrices is: "<<endl;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<result[i][j]<<" ";
            
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}
