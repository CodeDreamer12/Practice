#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m[4]=18;
    m[6]=20;
    m[8]=22;
    
    cout<<m.at(6)<<endl;
    
   cout<<m.empty()<<endl;
   
   m.erase(8);
   
   for(auto i=m.begin(); i!=m.end(); i++){
       cout<<i->first<<" "<<i->second<<endl;
   }
   
   m.clear();
   
   cout<<m.empty()<<endl;
   
}
