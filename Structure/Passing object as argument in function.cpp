#include<iostream>
using namespace std;
struct student{
    int id,age;
    string name;
}s1;
void display(struct student k1){
    cin>>k1.id>>k1.age>>k1.name;
    cout<<k1.id<<" "<<k1.age<<" "<<k1.name<<endl;
}
int main(){
    
    display(s1);
}
