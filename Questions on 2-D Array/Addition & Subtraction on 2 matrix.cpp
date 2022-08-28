#include<iostream>
using namespace std;
int main(){
    int arr1[2][2];
    int arr2[2][2];
    int sum;
    cout<<"INPUT VALUES FOR MATRIX 1: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"INPUT VALUES FOR MATRIX 2: "<<endl;
     for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"SUM OF TWO MATRIX IS "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"SUBTRACTION OF TWO MATRIX IS "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           cout<<arr1[i][j]-arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
