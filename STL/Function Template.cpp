#include <iostream>
using namespace std;
template<typename t>
t square(t x){
    return x*x;
}
int main()
{
 int a=8;
 float b=8.1;
 double c=98.34;
 cout<<endl<<square(a);
 cout<<endl<<square(b);
 cout<<endl<<square(c);

    return 0;
}
