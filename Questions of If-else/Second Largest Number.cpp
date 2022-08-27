//WAP TO FIND SECOND LARGEST NUMBER IF YOU ARE GIVEN THREE NUMBERS

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b && a<c) || (a>c && a<b)){
        cout<<"a is second smallest number"<<endl;
    }
    else if((b>a && b<c) || (b>c && b<a)){
        cout<<"b is second smallest number"<<endl;
    }
    else{
        cout<<"c is second smallest number"<<endl;
    }
    
}
