#include <iostream>
using namespace std;
class base{
    public:
    virtual void display()=0;
    void display1(){
        cout<<"Output";
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"Derived";
    }
};

int main() {
  derived d1;
  base *b1;
  b1=&d1;
  b1->display();

    return 0;
}
