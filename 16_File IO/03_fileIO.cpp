#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    
    ofstream out;
 
    
    out.open("sample60.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();
    return 0;
}
