#include<iostream>
using namespace std;

int main(){
  int i,j;
  i=1;
  j=2;
  loop:
    while(i<10){
      while(j<10){
        if(j==5){
          goto loop;
        }
          cout<<i<<j<<endl;
          j++;
      }
      i++;
    }

  return 0;
}
