#include<iostream>
using namespace std;
bool pairSum(int arr[], int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,5,8,14,20,27,30};
    int k=34;
    cout<<pairSum(arr,8,k);
}
