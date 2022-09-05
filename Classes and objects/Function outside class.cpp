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
    void display();
};
void car:: display(){
    cout<<model<<" "<<cost<<" "<<color<<endl;
}
int main(){
    car c1;
    c1.input();
    c1.cost=10.12;
    c1.display();
}
