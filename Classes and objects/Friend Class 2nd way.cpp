#include<iostream>
using namespace std;
class car{
    private:
    int model;
    protected:
    string color;
    public:
    float cost;
    friend class car1;
};
class car1{
    public:
    void input(car &t){
        cin>>t.model>>t.color;
    }
    void output(car t){
        cout<<t.model<<" "<<t.color<<" ";
    }
};
int main(){
    car c1;
    car1 c2;
    c2.input(c1);
    c2.output(c1);
}
