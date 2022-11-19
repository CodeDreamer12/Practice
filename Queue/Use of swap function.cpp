#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1;
    q1.emplace(1);
    q1.emplace(2);
    q1.emplace(3);
    queue<int> q2;
    q2.emplace(18);
    q2.emplace(91);
    
    q1.swap(q2);
    
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    cout<<endl;
    
     while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    
}
