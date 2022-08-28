#include <iostream>
using namespace std;
int main()
{
   string fname_lname;
   float average;
   getline(cin,fname_lname);
   int marks[4];
   cout<<"Enter marks of 4 subjects: "<<endl;
   for(int i=0; i<4; i++){
       cin>>marks[i];
   }
   average=(marks[0]+marks[1]+marks[2]+marks[3])/4;
   cout<<fname_lname<<endl;
   cout<<average<<endl;
    return 0;
}
