#include <iostream>
#include <vector>
using namespace std;
template<class T>
void display(vector <T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<endl;
    }
    cout<<endl;
}
int main() {
    
    vector <int> vec1;
    vector <char> vec2(4,6);
    vector <char> vec3(vec2);
    int element,size = 5;
    // cout<<"Enter length ";
    // cin>>size;
    // for (int i = 0; i <size ; i++)
    // {
    //     cout<<"Enter an element to add this number: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    
    
    // vec1.pop_back();
    // display(vec1);
    // vector <int> ::iterator iter = vec1.begin();
    // vec1.insert(iter+1, 566);
    // display(vec1);

    // display(vec1);
    display(vec2);
    // display(vec3);

    

    return 0 ;
}