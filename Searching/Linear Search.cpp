#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
     int key;
    cin>>key;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
   bool flag=false;
    for(i=0; i<n; i++){
       if(arr[i]==key){
          flag=true;
           break;
       } 
       flag=false;
    }

if(flag){
    cout<<"Found";
}
else{
    cout<<"Not Found";
}
    return 0;
}
