#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"Display of base"<<endl;
    }
};
class derived:public base{
    public:
    virtual void display(){
        cout<<"Display of derived"<<endl;
    }
};
int main(){
    base b1;
    b1.display();
    derived d1;
    d1.display();
    return 0;
}
