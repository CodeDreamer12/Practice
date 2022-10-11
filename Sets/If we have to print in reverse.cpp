#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(12);
    s.insert(10);
    s.insert(28);
    for(auto i=s.rbegin(); i!=s.rend(); i++){
        cout<<*i<<" ";
    }
}
