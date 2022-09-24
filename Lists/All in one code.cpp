#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    
    list<int> l1={100,80,160,40};
    list<int> :: iterator i;
    for(i=l1.begin(); i!=l1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    // l1.push_back(20);
    // for(i=l1.begin(); i!=l1.end(); i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;
    // l1.push_front(120);
    // for(i=l1.begin(); i!=l1.end(); i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;
    // l1.pop_back();
    // l1.pop_front();
    // for(i=l1.begin(); i!=l1.end(); i++){
    //     cout<<*i<<" ";
    // }
    
    // cout<<l1.front()<<endl;
    // cout<<l1.back()<<endl;
    
    // l1.sort();
    // for(i=l1.begin(); i!=l1.end(); i++){
    //     cout<<*i<<" ";
    // }
    
    // cout<<endl;
    // l1.reverse();
    // for(i=l1.begin(); i!=l1.end(); i++){
    //     cout<<*i<<" ";
    // }
    
    // cout<<endl;
    // l1.clear();
    // cout<<l1.empty()<<endl;
    
}
