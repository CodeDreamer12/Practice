#include<iostream>
using namespace std;
class funcOverload{
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    void add(int a,float b){
        cout<<a+b<<endl;
    }
    void add(float a,float b){
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    void add(float a,int b){
        cout<<a+b<<endl;
    }
};
int main(){
    funcOverload f1;
    f1.add(5,4);
    f1.add(5,4.3f);
    f1.add(5.2f,4.7f);
    f1.add(5,4,12);
    f1.add(5.2f,4);
    
}
