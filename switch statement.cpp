//WAP TO CHECK WHETHER INPUT CHARACTER IS VOWEL OR CONSONANT

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    switch(ch){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        cout<<"VOWEL"<<endl;
        break;
        default:
        cout<<"CONSONANT"<<endl;
        
    }

    return 0;
}


//WAP TO CREATE SIMPLE ARITHMETIC CALCULATOR USING +,-,*,/ AND PRINT WRONG OPERATOR IF ANYTHING ELSE

#include<iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    char op;
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"Wrong Operator"<<endl;
    }
}




