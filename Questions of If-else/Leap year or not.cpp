#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%400==0){
        if(year%100!=0){
            if(year%4==0){
                cout<<"LEAP YEAR";
            }
            else{
                cout<<"NOT A LEAP YEAR";
            }
        }
        else{
            cout<<"LEAP YEAR";
        }
    }
    else{
        cout<<"NOT A LEAP YEAR";
    }
}
