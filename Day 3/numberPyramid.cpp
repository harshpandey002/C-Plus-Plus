#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter height of pyramid: ";
  cin>>n;
  int m = 1;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<i+1;
    }
    m++;
    cout<<endl;
  }

  return 0;
}
