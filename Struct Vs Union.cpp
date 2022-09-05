#include<iostream>
using namespace std;
struct student{
    int age,id;
    double marks;
}s1;
union student1{
    int age,id;
    double marks;
}s2;
int main(){
    cout<<sizeof(s1)<<endl;
    cout<<sizeof(s2)<<endl;
}
