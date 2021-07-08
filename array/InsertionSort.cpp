#include <iostream>
using namespace std;

int main(){
  int n, t;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }


  for(int i=1; i<n; i++){

    if(arr[i-1] > arr[i]){

      t = arr[i];
      int j=i-1;

      while(arr[j]>t && j>=0){
        arr[j+1] = arr[j];
        j--;
      }

      arr[j+1] = t;

    }
  }



  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
