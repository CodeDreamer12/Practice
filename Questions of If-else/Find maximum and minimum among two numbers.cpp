#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    int Max,Min;
    if(num1>num2){
       Max=num1;
       Min=num2;
    }
    else{
        Max=num2;
        Min=num1;
    }
   cout<<"Maximum number is "<<Max<<endl;
   cout<<"Minimum number is "<<Min<<endl;
}
