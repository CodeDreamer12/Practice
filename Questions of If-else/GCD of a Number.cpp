#include <iostream>
using namespace std;

int main()
{
   int a,b,min;
   int i=1;
   int gcd=1;
   cin>>a>>b;
   min=(a>b)?b:a;
   if(a%b==0){
       gcd=b;
   }
   else if(b%a==0){
       gcd=a;
   }
   else{
       while(i<min){
       if(a%i==0 && b%i==0){
           gcd=gcd*i;
       }
       i++;
       
   }
   }
   cout<<gcd;
    return 0;
}
