#include<iostream>
using namespace std;
int main(){
    int x=-2;
    try{
        if(x<0){
            throw x;
            cout<<"Welcome to try block";
        }
    }
        catch(...){
            cout<<"Welcome to catch block";
        }
        
    }
