#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(12);
    s.insert(10);
    s.insert(12);
    for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
}
