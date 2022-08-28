#include<iostream>
using namespace std;
int sum(int marks[], int n){
    int total=0;
    for(int i=0; i<n; i++){
        total=total+marks[i];
    }
    return total;
}

int main(){
    int n,j;
    cin>>n;
    int marks[n];
    for(j=0; j<n; j++){
        cin>>marks[j];
    }
    int x=sum(marks,n);
    cout<<x;
    
}
