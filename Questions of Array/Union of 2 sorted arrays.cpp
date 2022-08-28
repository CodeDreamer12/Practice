#include<iostream>
using namespace std;
int main ()
{
  int arr1[5] = { 2, 4, 6, 8, 10 };
  int arr2[5] = { 1, 2, 4, 5, 8 };
  cout << "Intersection: ";
  for (int i = 0; i < 5; i++){
      for (int j = 0; j < 5; j++){
	        if (arr1[i] == arr2[j]){
	           cout << arr1[i] << " ";
                  break;
	           }
	      }
       }
  
  return 0;
}
