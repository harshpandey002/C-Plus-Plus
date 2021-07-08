#include<iostream>
using namespace std;

int main(){

  int n, mxlen=1, t;
  int len=1;
  cin>>n;
  int arr[n];

  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  t = arr[0]-arr[1];

  for(int i=1; i<n; i++){
    if(arr[i]-arr[i+1] == t){
      len++;
    }else{
      t = arr[i] - arr[i+1];
    }
    mxlen = max(len, mxlen);
  }

  cout<<mxlen;


  return 0;

}
