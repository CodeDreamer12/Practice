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
    void display();
};
void car::display(){
    cout<<model<<" "<<cost<<endl;
}
int main(){
    car c2(2023,67.98);
    c2.display();
}
