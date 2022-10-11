#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s={13,78,2,68};
    auto i=s.find(20);
    if(i==s.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    while(i!=s.end()){
        cout<<*i<<" ";
         i++;
    }
    s.clear();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}
