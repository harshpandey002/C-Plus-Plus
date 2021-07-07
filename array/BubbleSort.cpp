#include <iostream>
using namespace std;

int main(){
  int n, t, c=0;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }


  for(int i=0; i<n; i++){
    for(int j=1; j<n-i; j++){
      if(arr[j-1] > arr[j]){
        t = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = t;
      }
      c++;
    }
  }




  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

cout<<endl<<c;
  return 0;
}
