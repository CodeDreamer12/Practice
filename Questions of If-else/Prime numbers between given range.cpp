#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=20; i<=200; i++){
        bool flag=true;
        for(j=2; j<i/2; j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
        cout<<i<<endl;
    }
    }
}
