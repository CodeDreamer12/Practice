#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool myCompare(int x, int y){
    return(x>y);
}
int main() {
    
//vectors are like pointers but it does not store address of elements, it only points to the element
    
//   vector<int> v1;
//  vector<int> v1{10,20,30};

 
// int n=3;
// vector<int> v2(n,10);
// for(int i=0; i<v2.size(); i++){
//     cout<<v2[i]<<" ";
// }


// int n=3;
// vector<int> v2(n,10);
// for(int i=0; i<v2.size(); i++){
//     cout<<v2.at(i)<<" ";
// }
// cout<<endl;
// cout<<v2.size();


// v2.push_back(20);
// cout<<endl;
// for(int i=0; i<v2.size(); i++){
//     cout<<v2[i]<<" ";
// }


// vector <int> v1{20,10,15};
// vector<int>::iterator i;
// for(i=v1.begin(); i!=v1.end(); i++){
//     cout<<*i<<" ";
// }

//sorting in Increasing order
// sort(v1.begin(), v1.end());
// cout<<endl;
// for(i=v1.begin(); i!=v1.end(); i++){
//     cout<<*i<<" ";
// }

//sorting in decreasing order
// sort(v1.begin(), v1.end(), myCompare);
// cout<<endl;
// for(i=v1.begin(); i!=v1.end(); i++){
//     cout<<*i<<" ";
// }


// vector <int> v1{10,200,30};
// vector <int> v2(v1.begin(), v1.end());
// vector<int> v2;
// v2=v1;     2nd way of copying values
// for(int i=0; i<v2.size(); i++){
//     cout<<v2[i]<<" ";
// }


// int n=10;
// vector<int> v1{1,2,3,4,5};
// for(auto i=v1.begin(); i!=v1.end(); i++){
//     *i=n++;
// }
// for(int i=0; i<v1.size(); i++){
//     cout<<v1[i]<<" ";
// }


//-->generate error(values can't be modified we can only display values & cbegin,cend are constant iterator that means its value can't be modified)
// int n=10;
// vector<int> v1{1,2,3,4,5};
// for(auto i=v1.cbegin(); i!=v1.cend(); i++){
//     *i=n++;
// }
// for(int i=0; i<v1.size(); i++){
//     cout<<v1[i]<<" ";
// }


//it will print in reverse order
// vector<int> v1{1,2,3,4,5};
// for(auto i=v1.rbegin(); i!=v1.rend(); i++){
//     cout<<*i<<" ";
// }


// vector<int> v1{1,2,4,5,6};
// vector <int>:: iterator i=v1.begin();
// v1.insert(i+2,3);
// for(int i=0; i<v1.size(); i++){
//     cout<<v1[i]<<" ";
// }


// vector<int> v1{10,20,30};
// vector<int>:: iterator i;
// int a;
// for(int j=1; j<=5; j++){
//     cin>>a;
//     i=v1.begin();
//     v1.insert(i,a);
// }
// for(auto k=v1.begin(); k!=v1.end(); k++){
//     cout<<*k<<" ";
// }


// vector<int> v1;
// int n=5, ele;
// for(int i=0; i<n; i++){
//     cin>>ele;
//     v1.push_back(ele);
// }
// for(int i=0; i<v1.size(); i++){
//     cout<<v1[i]<<" ";
// }

    return 0;
}
