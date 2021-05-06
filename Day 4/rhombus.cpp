#include<iostream>
using namespace std;

int main(){

  int n, m;
  cout<<"Enter height of rhombus: ";
  cin>>n;
  m = n-1;
  for(int i=0; i<n; i++){
    for(int x=0; x<=m; x++){
      cout<<" ";
    }
    m--;
    for(int j=0; j<n; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

  return 0;
}
