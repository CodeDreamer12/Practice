#include<iostream>
using namespace std;
class car{
    private:
    int model;
    float cost;
    string color;
    public:
    car(int m1, float c1){
        model=m1;
        cost=c1;
    }
    car(car &t){
        model=t.model;
        cost=t.cost;
    }
    void display();
};
void car::display(){
    cout<<model<<" "<<cost<<endl;
}
int main(){
    car c2(2025,89.76);
    car c3=c2;
    c2.display();
    c3.display();
}
