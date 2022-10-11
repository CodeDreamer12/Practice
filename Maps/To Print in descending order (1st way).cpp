#include<iostream>
#include<map>
using namespace std;
int main(){
   
    map<char,int,greater<char>> m1={{'a',10},{'z',5},{'t',2}};
    
    m1['z']=100;    //updating value of key
    
    for(auto i=m1.begin(); i!=m1.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    
}
