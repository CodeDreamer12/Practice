#include<iostream>
using namespace std;
class baseClass1{
    protected:
    int age;
    public:
    void input(){
        cout<<"Enter age "<<" ";
        cin>>age;
    }
    void output(){
        cout<<age;
    }
};
class baseClass2{
    protected:
    int id;
    public:
    void input(){
        cout<<"Enter id "<<" ";
        cin>>id;
    }
    void output(){
        cout<<id;
    }
};
class derivedClass:public baseClass1, public baseClass2{

    
};
int main(){
    derivedClass d1;
    d1.input();
    d1.output();
}
