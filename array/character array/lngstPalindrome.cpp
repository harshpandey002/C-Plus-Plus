#include<iostream>
using namespace std;

int main(){

  string s;
  cin>>s;
  int x, y, l, check, mx=0;
  int st, en;
  int n = s.length();

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(s[i] == s[j]){
        check = 1;
        l=0;
        x = i+1;
        y = j-1;
         for(int k=i+1; k<j; k++){
           if(s[x] != s[y]){
             check = 0;
             break;
           }
           l++;
           x++;
           y--;
         }
         if(check == 1 && l > mx){
          mx = l;
          st = i;
          en = j;
        }
      }
    }
  }

  for(int i=st; i<=en; i++){
    cout<<s[i];
  }

  return 0;
}
