#include <iostream>
#include<set>
using namespace std;

int main()
{
  set<int> s;
  s.insert(30);
  s.insert(12);
  s.insert(28);
  for(auto i=s.begin(); i!=s.end(); i++){
      cout<<*i<<" ";
  }

    return 0;
}
