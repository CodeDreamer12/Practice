#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int,greater<int>> s;
    s.insert(20);
    s.insert(10);
    s.insert(30);
    for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
}
