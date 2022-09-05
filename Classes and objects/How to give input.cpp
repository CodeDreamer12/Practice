#include<iostream>
using namespace std;
class car{
    private:
    int model;
    protected:
    string color;
    public:
    float cost;
    void input(){
        cin>>model>>color;
    }
    void display(){
        cout<<model<<" "<<cost<<" "<<color;
    }
};
int main(){
    car c1;
    c1.input();
    c1.cost=78.92;
    c1.display();
}
