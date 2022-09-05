#include<iostream>
using namespace std;
union student{
    int id,age;
    double marks;
};
int main(){
  student s1;
  student s2;
  student s3;
  cin>>s1.id>>s2.age>>s3.marks;
  cout<<s1.id<<" "<<s2.age<<" "<<s3.marks;
}
