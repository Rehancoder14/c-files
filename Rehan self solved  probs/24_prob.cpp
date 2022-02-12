#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N;
    cin >> N; //here  we take the number of integers from user

    int arr[N]; //through this we can repeatedly take the step

    for (int i = 0; i < N; i++) { //This for loop will take the as many as input we want depending on N
        cin >> arr[i];        
    }
    for (int j = N - 1; j >= 0; j--) {//This for loop will return numbers taken from the input from user and return it in reverse order
        cout << arr[j] << " ";
    }
    return 0;
}