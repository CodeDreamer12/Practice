#include<iostream>
using namespace std;
int fact(int);
int main(){
    int a;
    cin>>a;
    int x=fact(a);
    cout<<"Factorial of a number is "<<x<<endl;
}
int fact(int a){
    int factorial=1;
    for(int i=a; i>=1; i--){
        factorial=factorial*i;
    }
    return factorial;
}
