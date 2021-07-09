//Brute Force

#include <iostream>
using namespace std;

int main(){
  int n, s=0;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int sum;
  cin>>sum;

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      s+=arr[j];
      if(s == sum){
        cout<<i<<" "<<j;
        return 0;
      }
    }
    s=0;
  }


  return 0;
}
