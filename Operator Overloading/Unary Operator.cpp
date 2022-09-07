#include<iostream>
using namespace std;
class operatorOverloading{
    private:
    int a;
    public:
    operatorOverloading(){
        a=0;
    }
    void operator++(){
         a++;
    }
    void operator--(){
       a--;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    operatorOverloading o3;
    ++o3;
    o3.display();
    --o3;
    o3.display();
    return 0;
}
