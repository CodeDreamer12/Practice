#include<iostream>
using namespace std;
void change(int arr[]){
    arr[2]=12;
}
int main(){
    int arr[5]={10,20,30,40,50};
    change(arr);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
