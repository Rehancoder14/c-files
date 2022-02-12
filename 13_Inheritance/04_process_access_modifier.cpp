#include <iostream>
using namespace std;
class base
{
protected: //protected member means  but it can be inherited
    int a;

private:
    int b;
};
class derived ::protected base{

};
int main()
{
    base b;
    derived d;
    // cout<<b.a; will not work coz a is protected in this case

    return 0;
}

/* For a protected member:
                public derivation           private derivation              protected derivation
Private:        Not inherited               Not inherited                   Not inherited
protected:      protected                   Private                         protected
public:         public                      public                          Protected

*/