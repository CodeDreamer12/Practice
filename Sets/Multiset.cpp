#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s1={1,2,3,4,5};
    set<int>::iterator i;
    for(i=s1.begin(); i!=s1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    multiset<int>s2(s1.begin(),s1.end());
    multiset<int>::iterator itr;
    for(itr=s2.begin(); itr!=s2.end(); itr++){
        cout<<*itr<<" ";
    }
    s2.insert(2);
    s2.insert(3);
    cout<<endl;
    for(itr=s2.begin(); itr!=s2.end(); itr++){
        cout<<*itr<<" ";
    }
}
