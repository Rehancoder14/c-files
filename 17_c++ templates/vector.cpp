#include <iostream>
#include <vector>
using namespace std;
void display( vector<int> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
        
    }
    
}
int main() {
    vector<int> vect1;
    int arr, size;
    cin>>size;
    for (int i = 0; i <size; i++)
    {
        cout<<"Enter the elements in array ";
        cin>>arr;
        vect1.push_back(arr);
    }
    vector<int>:: iterator iter = vect1.begin();
    vect1.insert(iter,5,500);
    display(vect1);
    

    return 0 ;
}