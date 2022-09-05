#include<iostream>
using namespace std;
struct student{
    int age,id;
    string name;
};
int main(){
    student s1;
    student *s2=&s1;
    cin>>s2->age>>s2->id>>s2->name;
    cout<<s2->age<<" "<<s2->id<<" "<<s2->name;
}
