#include<iostream>
using namespace std;

int main(){

  int a, b;
  cout<<"Enter two numbers a and b: "<<endl;
  cin>>a>>b;

  while(a!=b){

    int i;

    for(i=2; i<a; i++){
      if(a%i==0){
        break;
      }
    }

    if(i == a){
      cout<<a<<endl;
    }

    a++;
  }


  return 0;
}
