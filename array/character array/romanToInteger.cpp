/*
I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
*/

#include<iostream>
using namespace std;

int value(char ch){
  if(ch=='M')
    return 1000;
  else if(ch=='D')
    return 500;
  else if(ch=='C')
    return 100;
  else if(ch=='L')
    return 50;
  else if(ch=='X')
    return 10;
  else if(ch=='V')
    return 5;

    return 1;
 }

int main(){

  string s;
  cin>>s;
  int ans=0;
  int i=0;
  while(i<s.length()){
    if(i+1<s.length() && value(s[i])<value(s[i+1])){
      ans+=value(s[i+1])-value(s[i]);
      i=i+2;
    }
    else{
      ans+=value(s[i]);
      i++;
    }
  }
  cout<<ans;

  return 0;
}
