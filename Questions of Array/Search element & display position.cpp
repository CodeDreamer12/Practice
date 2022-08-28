#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool flag=false;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"Element is present at position "<<i<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
}
