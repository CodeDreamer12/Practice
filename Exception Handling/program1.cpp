#include<iostream>
using namespace std;
int main(){
    float x=-5.8;
    try{
        if(x<0){
            throw x;
            cout<<"Welcome to try block";
        }
    }
        catch(int){
            cout<<"Welcome to int catch";
        }
        catch(float){
            cout<<"Welcome to float catch";
        }
    }
