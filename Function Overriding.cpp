#include <iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"Display of Base"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"Display of Derived"<<endl;
        // base::display();    
    }
};
int main()
{
   derived d1;
//   d1.display();
   d1.base::display();

    return 0;
}
