#include<iostream>
#include<climits>
using namespace std;



int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int k, x;
  int mx = INT_MIN;
  int mi, idx;
  int kv = 0;
  int krr[n];

  for(k=1; k<n-1; k++){
    int count=0;
    int s = 0;
    mi = INT_MAX;
    for(int i=k; i<n; i++){
      if(arr[i] < mi){
        idx = i;
      }
    }

    for(int i=k; i<n; i++){
      if(i == idx){
        continue;
      }
      else{
        s+=arr[i];
        count++;
      }
    }

    int avg = s/count;

    if(avg > mx){
      x=0;
      mx = avg;
      krr[x] = k;
      x++;
    }else if(avg == mx){
      krr[x] = k;
      x++;
    }
  }

  for(int i=0; i<x; i++){
    cout<<krr[i]<<" ";
  }

  return 0;
}
