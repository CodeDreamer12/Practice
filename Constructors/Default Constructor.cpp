#include<iostream>
using namespace std;
class car{
    private:
    int model;
    float cost;
    string color;
    public:
    car(){
        model=2024;
        cost=10.12;
    }
    void display();
};
void car::display(){
    cout<<model<<" "<<cost<<endl;
}
int main(){
    car c1;
    c1.display();
    return 0;
}
