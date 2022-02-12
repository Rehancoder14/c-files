#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map <string, int> marks;
    marks["Rehan"]= 98;
    marks["jimmy"]= 67;
    marks["orton"]= 46;
    map <string , int > :: iterator itr;
    for (itr = marks.begin();itr != marks.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl; 
    }
    
    return 0 ;
}