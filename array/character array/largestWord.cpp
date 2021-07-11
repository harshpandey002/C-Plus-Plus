#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

  char arr[n+1];
  cin.getline(arr, n);
  cin.ignore();

  int i=0, mx=0, s=0;

  while(arr[i] != '\0'){
    if (arr[i] == '\0' || arr[i] == ' ') {
      mx = max(mx, s);
      s=0;
    }
      s++;
      i++;
  }

  cout<<mx;

  return 0;
}
