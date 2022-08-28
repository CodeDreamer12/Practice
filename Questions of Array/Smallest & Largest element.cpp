#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int largest;
    int smallest;
    largest=smallest=arr[0];
    for(int i=1; i<6; i++){
        if(largest<arr[i]){ 
            largest=arr[i]; 
        }
        if(smallest>arr[i]){ 
            smallest=arr[i]; 
        }
    }
    cout<<"largest "<<largest<<endl;
    cout<<"smallest "<<smallest<<endl;
    
}
