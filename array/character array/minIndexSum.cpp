// Input: arr1 = ["Shogun","Tapioca Express","Burger King","KFC"], arr2 = ["KFC","Shogun","Burger King"]
// Output: ["Shogun"]
// Explanation: The restaurant they both like and have the least index sum is "Shogun" with index sum 1 (0+1).

#include<iostream>
using namespace std;

int main(){

  string s1[] = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
  string s2[] = {"KFC", "Shogun", "Burger King"};

  int n = sizeof(s1)/sizeof(s1[0]);
  int m = sizeof(s2)/sizeof(s2[0]);
  int mx=0, s, idx;

  for(int i=0; i<n; i++){
    for(int j=i; j<m; j++){
      if(s1[i] == s2[j]){
          s = i+j;
          if(s<mx){
            idx = i;
            mx = s;
          }
      }
    }
  }

  cout<<s1[idx]<<endl;
  cout<<"Min Index Sum: "<<mx;

  return 0;
}
