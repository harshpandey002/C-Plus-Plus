#include<iostream>
using namespace std;

int main(){

  int mx, n;
  cin>>n;
  int arr[n];

  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  mx=arr[0];

  for(int i=0; i<n; i++){
    if(arr[i] > mx){
      mx = arr[i];
    }else{
      arr[i] = mx;
    }
  }

  for(int i=0; i<n ; i++){
    cout<<arr[i]<<" ";
  }

  return 0;;

}
