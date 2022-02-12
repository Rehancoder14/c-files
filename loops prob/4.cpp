#include <iostream>
#include <io.h>
#include <f
using namespace std;
int main ()
{
int length;
char * buffer;
ifstream is;
is.open ("sample.txt", ios :: binary );
is.seekg (0, ios :: end);
length = is.tellg();
is.seekg (0, ios :: beg);
buffer = new char [length];
is.read (buffer, length);
is.close();
cout.write (buffer, length);
delete[] buffer;
return 0;
}