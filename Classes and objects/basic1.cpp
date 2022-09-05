#include <iostream>
using namespace std;
class car{
    private:
    int model;
    public:
    float cost;
    protected:
    string color;
};

int main()
{
    car c1;
    // c1.model=2022;   //ERROR
    c1.cost=78.98;
    // c1.color="White";   //ERROR

    return 0;
}
