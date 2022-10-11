#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(){
   map<char,int> m={{'s',1},{'a',10},{'v',2}}; 
   map<char,int>::reverse_iterator i;
   for(i=m.rbegin(); i!=m.rend(); i++){
       cout<<i->first<<" "<<i->second<<endl;
   }
}
