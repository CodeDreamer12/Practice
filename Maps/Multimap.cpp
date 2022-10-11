#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<char,int>m;
    m.insert({'a',3});
    m.insert({'d',6});
     m.insert(make_pair('a',7));
      m.insert(pair<char,int>('a',100));
      
    for(auto i=m.begin(); i!=m.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    
    cout<<m.count('a');
}
