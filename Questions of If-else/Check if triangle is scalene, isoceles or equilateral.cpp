#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides of traingle"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(a==b || b==c || c==a){
        cout<<"Isoceles triangle"<<endl;
    }
    else{
        cout<<"Scalene triangle"<<endl;
    }
}
