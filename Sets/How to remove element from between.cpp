#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s{1,2,3,4,5};
    s.erase(3);
    for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
}
