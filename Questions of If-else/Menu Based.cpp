#include<iostream>
using namespace std;
int main(){
    cout<<"List of operations is:"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    int n;
    cout<<"Select a valid operation number: ";
    cin>>n;
    
    cout<<"Enter two number to ";
    if(n==1){
        cout<<"add: ";
    }
    else{
        cout<<"subtract: ";
    }
    int a,b;
    cin>>a>>b;
    if(n==1){
        cout<<"Addition= "<<a+b<<endl;
    }
    else{
        cout<<"Subtraction= "<<a-b<<endl;
    }
    char ch;
    cout<<"Do you again want to perform the operations (Y/N): ";
    cin>>ch;
    if(ch=='Y'){
        cout<<"List of operations is:"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    int n;
    cout<<"Select a valid operation number: ";
    cin>>n;
    
    cout<<"Enter two number to ";
    if(n==1){
        cout<<"add: ";
    }
    else{
        cout<<"subtract: ";
    }
    int a,b;
    cin>>a>>b;
    if(n==1){
        cout<<"Addition= "<<a+b<<endl;
    }
    else{
        cout<<"Subtraction= "<<a-b<<endl;
    }
    char ch;
    cout<<"Do you again want to perform the operations (Y/N): ";
    cin>>ch;
    }
}
