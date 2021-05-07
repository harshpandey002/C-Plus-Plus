#include<iostream>
using namespace std;

int main(){

  int n, m, a;
  cout<<"Enter the height of pattern: ";
  cin>>n;
  m = 1;
  a = n;
  for(int i=0; i<n; i++){
    for(int x=0; x<a; x++){
      cout<<" ";
    }
    a--;
    for(int j=1; j<=m; j++){
      cout<<j<<" ";
    }
    m++;
    cout<<endl;
  }

  return 0;
}
