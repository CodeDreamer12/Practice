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


//ENTER CHARACTER FROM KEYBOARD AND PRINT ITS ASCII VALUE

#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    cout<<int(ch)<<endl;
}


//WAP TO FIND QUOTIENT AND REMAINDER OF A NUMBER

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int q=a/b;
    cout<<"Quotient is "<<q<<endl;
    int r=a%b;
    cout<<"Remainder is "<<r<<endl;
    
}


//WAP TO FIND SIZE OF INT, FLOAT, DOUBLE AND CHAR

#include<iostream>
using namespace std;
int main(){
    cout<<"Size of int is "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of float is "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of double is "<<sizeof(double)<<" bytes"<<endl;
    cout<<"Size of char is "<<sizeof(char)<<" bytes"<<endl;
    
}


//WAP TO SWAP TWO NUMBERS

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
}

//Basic loop question

#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    
    while(i<=n){
        cout<<i<<" ";
        if(i%5==0){
            cout<<endl;
        }
        i++;
    }
}
