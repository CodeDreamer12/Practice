#include <iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"Base";
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"Derived";
    }
};

int main() {
  
//   derived d1;
//   base *b1;
//   b1=&d1;
//   b1->display();

//   base *ptr;
//   base b1;
//   derived d1;
//   ptr=&b1;
//   ptr->display();
//   ptr=&d1;
//   ptr->display();

   derived *ptr;
   derived d1;
   ptr=&d1;
   ptr->display();

    return 0;
}
