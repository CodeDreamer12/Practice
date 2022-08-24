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


//WAP TO FIND WHETHER A YEAR IS LEAP YEAR OR NOT

#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%400==0){
        if(year%100!=0){
            if(year%4==0){
                cout<<"LEAP YEAR";
            }
            else{
                cout<<"NOT A LEAP YEAR";
            }
        }
        else{
            cout<<"LEAP YEAR";
        }
    }
    else{
        cout<<"NOT A LEAP YEAR";
    }
}


//WAP TO FIND ALL ROOTS OF QUADRATIC EQUATION

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    float determinant=sqrt((b*b)-(4*a*c));
    if(determinant>0){
        float root1=(-b+determinant)/2*a;
        float root2=(-b-determinant)/2*a;
        cout<<"Root 1 is "<<root1<<"Root 2 is "<<root2<<endl;
    }
    else if(determinant=0){
        float root1=(-b/2*a);
        float root2=(-b/2*a);
        cout<<"Root 1 is "<<root1<<"Root 2 is "<<root2<<endl;
    }
    else{
       float real=-b/2*a;
       float imaginary=sqrt(-((b*b)-4*a*c))/2*a;
       cout<<"Root 1 is "<<real<<"+i"<<imaginary<<endl;
       cout<<"Root 2 is "<<real<<"-i"<<imaginary<<endl;
    }
    return 0;
}


//FIND FACTORIAL OF A NUMBER

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    cout<<fact;
}


//WAP TO PRINT FIBONACCI SERIES OF 10 NUMBERS

#include <iostream>
using namespace std;

int main()
{
 int a=0;
 int b=1;
 int c;
 cout<<a<<" ";
 cout<<b<<" ";
 for(int i=3; i<=10; i++){
     c=a+b;
     cout<<c<<" ";
     a=b;
     b=c;
 }
    return 0;
}


//WAP TO REVERSE A NUMBER 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reversed number is "<<rev;
}




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
