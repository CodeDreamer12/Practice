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
class derivedClass: public baseClass{
    private:
    string email;
    public:
    void input(){
        cin>>rollNo;
        cin>>email;
    }
    void display(){
        cout<<rollNo<<endl;
        cout<<email;
    }
};
int main(){
    derivedClass d1;
    d1.input();
    d1.display();
    return 0;
}
