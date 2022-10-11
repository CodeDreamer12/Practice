#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m={{60,12},{100,20},{1,45}};
    for(auto i=m.rbegin(); i!=m.rend(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}
