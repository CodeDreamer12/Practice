#include<iostream>
using namespace std;
class car{
    private:
    int model;
    float cost;
    string *color;
    public:
    car(int m1,float c1){
        model=m1;
        cost=c1;
    }
    car(){
        color=new string;
    }
    void display();
    car(car &t){
        model=t.model;
        cost=t.cost;
    }
};
void car::display(){
    cout<<model<<" "<<cost<<endl;
}
int main(){
    car c1(2022,56.89);
    car c2=c1;
    c1.display();
    c2.display();
    return 0;
}
