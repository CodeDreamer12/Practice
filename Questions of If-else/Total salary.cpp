//FIND TOTAL SALARY OF EMPLOYEE IF BASIC SALARY IS WITHIN FOLLOWING RANGE

#include<iostream>
using namespace std;
int main(){
    float bs,da,hra,ts;
    cin>>bs;
    if(bs<=5000){
        da=bs*0.02;
        hra=bs*0.02;
    }
    else if(bs<=10000){
        da=bs*0.03;
        hra=bs*0.03;
    }
    else if(bs<=15000){
        da=bs*(3.5/100);
        hra=bs*0.03;
    }
    else{
        da=bs*(4.5/100);
        hra=bs*0.04;
    }
    ts=bs+da+hra;
    cout<<"Total Salary is "<<ts<<endl;
}
