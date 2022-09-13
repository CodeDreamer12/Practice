#include <iostream>
using namespace std;
int main(){
    char alpha;
    int isUppercase;
    int isLowercase;
    cout<<"Enter any alphabet"<<endl;
    cin>>alpha;
    isLowercase=(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u');
    isUppercase=(alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U');
    if(isUppercase || isLowercase){
        cout<<"It is a vowel"<<endl;
    }
    else{
        cout<<"It is a consonant"<<endl;
    }
}
