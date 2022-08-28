#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Major Diagonals are ";
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           if(i==j){
               cout<<arr[i][j]<<" ";
               
           }
          
        }
    }
    cout<<endl;
    cout<<"Minor Diagonals are ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           if(i+j==2){
               cout<<arr[i][j]<<" ";
               
           }
          
        }
    }
}
