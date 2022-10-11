#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> m={{'c',3},{'a',1},{'b',2}};
    
    // auto i=m.find('b');
    // cout<<i->first<<" "<<i->second<<endl;
    
    // m.erase(m.find('b'),m.end());
    // for(auto i=m.begin(); i!=m.end(); i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    
    //  m.erase(m.find('b'),m.find('c'));
    // for(auto i=m.begin(); i!=m.end(); i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    
    cout<<m.count('c');
    
}
