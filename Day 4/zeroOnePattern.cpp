#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter the height of pattern: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i>=j){
        if((i+j)%2 == 0){
          cout<<"1 ";
        }else{
          cout<<"0 ";
        }
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }

  return 0;
}