#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool flag=true;
    for(int i=2; i<num/2; i++){
        if(num%i==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"PRIME"<<endl;
    }
    else{
        cout<<"NOT PRIME"<<endl;
    }
}
