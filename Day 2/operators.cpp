#include<iostream>
using namespace std;

int main(){

  int i = 1;
  int j = 2;
  int k;

  //  1   2    1     2     3     4
  k = i + j + i++ + j++ + ++i + ++j;
  cout<<"i = "<<i<<endl<<"j = "<<j<<endl<<"k = "<<k<<endl;

  i = 1;
  j = 2;
  k = 3;

  //      1     2     3
  int m = i-- - j-- - k--;
  cout<<"\ni = "<<i<<endl<<"j = "<<j<<endl<<"k = "<<k<<endl<<"m = "<<m<<endl;


  return 0;
}
