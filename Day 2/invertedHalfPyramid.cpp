#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter height of pyramid: ";
  cin>>n;
  int m = n;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<"*";
    }
    m--;
    cout<<endl;
  }

  return 0;
}
