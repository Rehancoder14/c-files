
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student 
{
    private:
    int marks[5];
    public:
    void N_lines()
    {
        for (int i = 0; i < 5; i++) 
        {
            cin >> marks[i];
        }
    }
    int Total_marks() 
    {
        int count = 0;
        for (int i = 0; i < 5; i++) 
        {
            count += marks[i];
        }
        return count;
    }
};
int main() 
{
    int n; 
    cin >> n;
    Student *s = new Student[n]; 
    
    for(int i = 0; i < n; i++)
    {
        s[i].N_lines();
    }
    
    
    int kristen_score = s[0].Total_marks();

    
    int count = 0; 
    for(int i = 1; i < n; i++)
    {
        int total = s[i].Total_marks();
        if(total > kristen_score)
        {
            count++;
        }
    }

    
    cout << count;
    
    return 0;