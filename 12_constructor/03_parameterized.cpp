#include <iostream>
using namespace std;
class point{
    int a, b;
    public:
        point(int x, int y){
            a = x;
            b = y;
        }
        void displaypoint(){
            cout<<"The point is ("<<a<<","<<b<<")"<<endl;
        }

};
int main() {
    point amp(6,8);
    
    amp.displaypoint();

    return 0 ;
}
 