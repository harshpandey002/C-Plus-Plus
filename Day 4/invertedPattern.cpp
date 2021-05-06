#include<iostream>
using namespace std;

int main(){

  int n, m, x;
  cout<<"Enter the height of pattern: ";
  cin>>n;
  m = n;

  for(int i=0; i<n; i++){
    x = 1;
    for(int j=0; j<m; j++){
      cout<<x<<" ";
      x++;
    }
    m--;
    cout<<endl;
  }

  return 0;
}
