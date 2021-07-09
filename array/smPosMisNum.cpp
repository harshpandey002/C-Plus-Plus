#include <iostream>
using namespace std;

int main(){

  int n, j, lgNum=100;
  cin>>n;

  int arr[n], check[lgNum];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<lgNum; i++){
    check[i] = false;
  }

  for(int i=0; i<n; i++){
    if(arr[i] < 0){
      continue;
    }else{
      j = arr[i];
      check[j]= true;
    }
  }


  for(int i=0; i<lgNum; i++){
    if(check[i] == false){
      cout<<i;
      break;
    }
  }

  return 0;
}
