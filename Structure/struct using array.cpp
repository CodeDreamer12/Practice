#include<iostream>
using namespace std;
struct student{
    int id,age;
    string name;
};
int main(){
  student s1[5];
  for(int i=0; i<5; i++){
      cin>>s1[i].id>>s1[i].age>>s1[i].name;
  }
  for(int i=0; i<5; i++){
      cout<<s1[i].id<<" "<<s1[i].age<<" "<<s1[i].name<<endl;
  }
  
}
