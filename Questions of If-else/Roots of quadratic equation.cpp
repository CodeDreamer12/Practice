#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    float determinant=sqrt((b*b)-(4*a*c));
    if(determinant>0){
        float root1=(-b+determinant)/2*a;
        float root2=(-b-determinant)/2*a;
        cout<<"Root 1 is "<<root1<<"Root 2 is "<<root2<<endl;
    }
    else if(determinant=0){
        float root1=(-b/2*a);
        float root2=(-b/2*a);
        cout<<"Root 1 is "<<root1<<"Root 2 is "<<root2<<endl;
    }
    else{
       float real=-b/2*a;
       float imaginary=sqrt(-((b*b)-4*a*c))/2*a;
       cout<<"Root 1 is "<<real<<"+i"<<imaginary<<endl;
       cout<<"Root 2 is "<<real<<"-i"<<imaginary<<endl;
    }
    return 0;
}
