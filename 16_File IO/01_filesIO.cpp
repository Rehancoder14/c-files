#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string st = "Rehan Mahat";
    string st2;
    // ofstream out("sample.txt");
    // out<<st;
    ifstream in("sample4.txt");
    getline(in, st2);
    cout<<st2;

    return 0 ;
}
/* useful classes for working with files in c++
1) fstreambase
2) istream  -->> derived from fstreambase
3) ostream --->> derived from fstreambase
 */
