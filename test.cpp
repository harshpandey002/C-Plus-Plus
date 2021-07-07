// Binary Search

#include <iostream>
using namespace std;

int binary(int arr[], int k, int n){
  int s, m, l;
  s=0;
  l=n-1;
  m=(s+l)/2;

  while(s<=l){
    if(arr[m]==k){
      cout<<"Key Found at "<<m;
      return 0;
    }else if(arr[m]>k){
      l=m-1;
      m=(s+l)/2;
    }else if(arr[m]<k){
      s=m+1;
      m=(s+l)/2;
    }else{
      cout<<"Key not in array";
      return 0;
    }
  }

}


int main(){
  int n, key;
  cin>>n;
  int arr[n];

  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  cin>>key;

  binary(arr, key, n);

  return 0;
}
