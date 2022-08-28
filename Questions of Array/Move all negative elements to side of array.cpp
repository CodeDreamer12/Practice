#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,-2,8,-5,9,-12,-1};
    for(int i=0; i<6; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int a=0; a<7; a++){
        cout<<arr[a]<<" ";
    }
}
