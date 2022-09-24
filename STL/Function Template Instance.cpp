#include<iostream>
using namespace std;
template<class t>
class x{
    private:
    t a;
    t b;
    public:
    x(t a1, t b1){
        a=a1;
        b=b1;
    }
    t add(){
        return a+b;
    }
};
int main(){
    x <int> addint(75,25);
    x <float> addfloat(98.3,1.7);
    x <double> adddouble(78.45,21.55);
    cout<<addint.add()<<endl;
    cout<<addfloat.add()<<endl;
    cout<<adddouble.add()<<endl;
}
