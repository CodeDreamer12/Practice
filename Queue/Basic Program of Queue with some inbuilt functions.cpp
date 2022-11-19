#include <iostream>
#include<queue>
using namespace std;
int main()
{
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  
 cout<<q.size()<<endl;
 
 cout<<q.front()<<endl;
 
 cout<<q.back()<<endl;
 
 cout<<q.empty()<<endl;
 
 while(!q.empty()){
     cout<<q.front()<<" ";
     q.pop();
 }
 
 cout<<endl;
 cout<<q.size()<<endl;
 
 cout<<q.empty()<<endl;
    return 0;
}
