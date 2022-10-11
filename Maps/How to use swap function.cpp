#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m1={{50,2},{10,3},{40,5}};
    map<int,int> m2={{78,29},{103,65}};
    
    swap(m1,m2);
    
    for(auto i=m1.begin(); i!=m1.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    
    for(auto i=m2.begin(); i!=m2.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    
}
