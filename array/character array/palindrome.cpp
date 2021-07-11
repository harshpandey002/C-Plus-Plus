#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

  char str[n];
  cin>>str;

  int i=0, c=1;

  while(i != n/2){
    if (str[i] != str[n-1-i]) {
      c=0;
      cout<<"Not a Palindrome";
      return 0;
    }
    i++;
  }

  cout<<"Palindrome";

  return 0;
}
