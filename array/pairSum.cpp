#include<iostream>
using namespace std;

int pairsum(int arr[], int n, int k){

  int sum=0, i=0, j=n-1;
  while(i < j) {
    sum = arr[i] + arr[j];
    if (sum > k) {
      j--;
    } else if (sum < k) {
      i++;
    } else {
      cout<<i<<" "<<j;
      return 0;
    }
  }

}

int main(){

  // int n, k;
  // cin>>n;
  // cin>>k;
  //
  // int arr[n];
  // for(int i=0; i<n; i++){
  //   cin>>arr[i];
  // }

  int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
  int k = 31;

  pairsum(arr, 8, k);

  return 0;
}
