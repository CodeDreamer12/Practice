#include<iostream>
using namespace std;
class operatorOverload{
    private:
    int real;
    int imag;
    public:
    operatorOverload(){
        real=0;
        imag=0;
    }
    operatorOverload(int r1, int i1){
        real=r1;
        imag=i1;
    }
    operatorOverload operator+(operatorOverload o1){
        operatorOverload o2;
        o2.real=real+o1.real;
        o2.imag=imag+o1.imag;
        return o2;
    }
    void display(){
        cout<<real<<" + "<<imag<<" i "<<endl;
    }
};
int main(){
    operatorOverload o3(10,12);
    operatorOverload o4(5,6);
    operatorOverload o5;
    o5=o3+o4;
    o5.display();  //15 + 18 i
    
   
}
