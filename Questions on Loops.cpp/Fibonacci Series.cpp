#include <iostream>
using namespace std;

int main()
{
 int a=0;
 int b=1;
 int c;
 cout<<a<<" ";
 cout<<b<<" ";
 for(int i=3; i<=10; i++){
     c=a+b;
     cout<<c<<" ";
     a=b;
     b=c;
 }
    return 0;
}
