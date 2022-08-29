#include <iostream>
using namespace std;
void fact(int*);
int main()
{
    int x;
    cin>>x;
    fact(&x);

    return 0;
}
void fact(int *y){
    int factorial=1;
    int z=*y;
    for(int i=1; i<=z; i++){
        factorial=factorial*i;
    }
    cout<<factorial;
}
