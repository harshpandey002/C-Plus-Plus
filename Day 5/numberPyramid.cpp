#include<iostream>
using namespace std;

int main(){

  int n, m, a;
  cout<<"Enter the height of pattern: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int x=1; x<=n-i; x++){
      cout<<" ";
    }
    for(int j=1; j<=i; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }

  return 0;
}
