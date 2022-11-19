#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(12);
    q.push(24);
    q.push(36);
    q.push(48);
    queue<int> temp=q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    
}
