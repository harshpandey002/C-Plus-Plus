#include<iostream>
using namespace std;

int main(){

  int n, mx=0, t, c=0;
  cin>>n;
  int arr[n];

  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n-1; i++){
    if(arr[i]>mx && arr[i]>arr[i+1]){
      c++;
      mx = arr[i];
    }
  }

  cout<<c;

  return 0;

}
