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
    void input(car &t){       //if we write (car t) then it will give garbage value
        cin>>t.model>>t.color;
        cout<<"Model = "<<t.model<<endl<<"Color = "<<t.color<<endl;
    }
   
};
int main(){
    car c1;
    car1 c2;
    c2.input(c1);
    
}
