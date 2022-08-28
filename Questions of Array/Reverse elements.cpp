#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int temp;
    for(int i=0,j=5; i<j; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
