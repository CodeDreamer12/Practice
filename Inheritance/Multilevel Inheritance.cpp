#include <iostream>
using namespace std;
class baseClass{
    private:
    int age;
    protected:
    int rollNo;
    public:
    string name;
};
class derivedClass1: private baseClass{ //or we can write public instead of private to correct the error
    private:
    string email;
    public:
    char sex;
    void input1(){
        cin>>rollNo;
        cin>>email;
    }
    void display1(){
        cout<<rollNo<<endl;
        cout<<email;
    }
};
class derivedClass2:public derivedClass1{
    public:
    float marks;
    void input2(){
        cin>>sex;
        cin>>marks;
        // cin>>name;  //error
    }
    void display2(){
        cout<<sex<<endl;
        cout<<marks;
        // cout<<name; //error
    }
};
int main(){
    derivedClass2 d2;
    d2.input2();
    d2.display2();
   
    return 0;
}
