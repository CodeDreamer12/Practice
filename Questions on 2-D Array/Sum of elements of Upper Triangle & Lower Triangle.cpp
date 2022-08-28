#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0;
    int sum2=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i<j){
                sum1=sum1+arr[i][j];
            }
        }
    }
    cout<<"Sum of upper elements is "<<sum1<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i>j){
                sum2=sum2+arr[i][j];
            }
        }
    }
    cout<<"Sum of lower elements is "<<sum2<<endl;

    return 0;
}
