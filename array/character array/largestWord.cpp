#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  cin.ignore();

  char arr[n+1];
  cin.get(arr, n);
  cin.ignore();

  int i=0, mx=0, s=1;

  while(i<n){
    if (arr[i] == '\0' || arr[i] == ' ') {
      if(mx < s){
        mx = s;
      }
      s=0;
    } else{
      s++;
    }

    if(arr[i] == '\0'){
      break;
    }
    i++;
  }

  cout<<mx;

  return 0;
}
