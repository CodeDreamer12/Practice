//WAP TO FIND WHETHER NUMBER IS EVEN OR ODD

#include <iostream>
using namespace std;

int main()
{
   int num;
   cin>>num;
   if(num%2==0){
       cout<<"EVEN";
   }
   else{
       cout<<"ODD";
   }

    return 0;
}


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


//FIND GREATEST OF THREE NUMBER

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"A is greater";
        }
        else{
            cout<<"C is greater";
        }
    }
    else{
        if(b>c){
            cout<<"B is greater";
        }
        else{
            cout<<"C is greater";
        }
    }
}


//WAP TO FIND SECOND LARGEST NUMBER IF YOU ARE GIVEN THREE NUMBERS

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b && a<c) || (a>c && a<b)){
        cout<<"a is second smallest number"<<endl;
    }
    else if((b>a && b<c) || (b>c && b<a)){
        cout<<"b is second smallest number"<<endl;
    }
    else{
        cout<<"c is second smallest number"<<endl;
    }
    
}
