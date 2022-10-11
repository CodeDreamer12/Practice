#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> m1,m2;
    m1['d']=4;
    m1['a']=1;
    m1['c']=3;
    
    // m2=m1;
    // for(auto i=m2.begin(); i!=m2.end(); i++){
    //     cout<<(*i).first<<" "<<(*i).second<<endl;
    // }
    
    // m2.insert(m1.begin(),m1.end());
    // for(auto i=m2.begin(); i!=m2.end(); i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    
}
