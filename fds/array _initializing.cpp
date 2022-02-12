#include <iostream>
using namespace std;
void linear_search(int arr[], int n, int arrsize)
{

    for (int i = 0; i < arrsize; i++)
    {
        if (n == arr[i])
        {
            cout <<"Given value is at index "<<i<<endl;
            break;
        }
        
    }
}
int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the length of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the number you want to search in array: ";
    cin >> key;
    linear_search(arr, key, n);

    return 0;
}