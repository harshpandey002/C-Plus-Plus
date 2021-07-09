#include<iostream>
using namespace std;

int main(){

  int n, mx=0, s=0;
  cin>>n;
  int arr[n];

  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      for(int k=i; k<=j; k++){
        s+=arr[k];
      }
      if(s > mx){
        mx = s;
      }
      s = 0;
    }
  }

  cout<<mx;

  return 0;;

}
