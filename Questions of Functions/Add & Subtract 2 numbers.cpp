#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int main(){
    int a,b;
    cin>>a>>b;
    int x=add(a,b);
    cout<<"Addition of two numbers is "<<x<<endl;
    int y=sub(a,b);
    cout<<"Subtraction of two numbers is "<<y<<endl;
}
int add(int a, int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
