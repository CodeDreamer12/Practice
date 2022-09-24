#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    int key;
    cin>>key;
    
    for(int i=0; i<n; i++){
        if(arr[i]==key){
             cout<<"First occurence of a number is at index "<<i<<endl;
             break;
        }
    }

    for(int j=n-1; j>=0; j--){
        if(arr[j]==key){
            cout<<"Last occurence of a number is at index "<<j<<endl;
            break;
        }
    }
}
