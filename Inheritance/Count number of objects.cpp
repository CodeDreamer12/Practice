#include<iostream>
using namespace std;
int count=0;
class student{
    private:
    int age,id;
    public:
    void input(){
        cin>>age>>id;
    }
    void output(){
        cout<<age<<endl<<id<<endl;
    }
    student(){
       count++;
       
    }
};
int main(){
    student s1;
    s1.input();
    s1.output();
    student s2;
    s2.input();
    s2.output();
    cout<<"Number of Objects= "<<count;
}
