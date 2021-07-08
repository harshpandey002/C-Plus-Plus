#include <iostream>
using namespace std;

int main(){
  int n, j, index = 101;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int idx[100];


  for(int i=1; i<100; i++){
    idx[i] = -1 ;
  }

  for(int i=0; i<n; i++){
    j = arr[i];


    if((idx[j] != -1) && (idx[j] < index)){
      index = idx[j];
    }
    idx[j] = i;
  }

  cout<<index;

  return 0;
}
