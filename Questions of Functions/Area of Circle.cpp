#include<iostream>
using namespace std;
void area(int n);
int main(){
    float r;
    cin>>r;
    area(r);
}
void area(int n){
    float ar=3.14*n*n;
    cout<<"Area is "<<ar;
}
