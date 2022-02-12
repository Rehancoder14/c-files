#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("sample60.txt");
    string name = "Alex";
    out<<name<<endl;
    out<<"My name is "<<name;
    out.close();
    return 0 ;
}