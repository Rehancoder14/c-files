#include <iostream>
using namespace std;
template <class T> //substitute T for custom datatypes
class vector
{
public:
T *arr;
int size;

    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
T dotProduct(vector &v)
{
    T d = 0;
    for (int i = 0; i < size; i++)
    {
        d += this->arr[i] * arr[i];
        
    }
    return d;
}
};
int main()
{
    vector <float>v1(3);
    v1.arr[0] = 2.4;
    v1.arr[1] = 2.3;
    v1.arr[2] = 2.3;
    vector <float>v2(3);
    v2.arr[0] = 3.1;
    v2.arr[1] = 3.0;
    v2.arr[2] = 3.2;
    
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}