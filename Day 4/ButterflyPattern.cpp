#include<iostream>
using namespace std;

int main(){

  int n, m;
  cout<<"Enter height of triangle: ";
  cin>>n;
  m=2*n;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if( j<=i || (i+j)>=(m-1) ){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  for(int i=n; i<m; i++){
    for(int j=0; j<m; j++){
      if( (i+j)<=(m-1) || j>=i ){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }

  return 0;
}
