#include<iostream>
using namespace std;

// int main(){
//
//   int n;
//   cout<<"Enter a number to check for prime: ";
//   cin>>n;
//
//   if(n == 1 || n == 2 || n == 3){
//     cout<<"Prime Number "<<endl;
//     return 0;
//   }else{
//     int i=2;
//     while(i<n){
//
//       if(n%i==0){
//         cout<<"Not a Prime Number"<<endl;
//         return 0;
//       }else{
//         i++;
//       }
//     }
//     if(i==n){
//       cout<<"Prime Number"<<endl;
//     }
//   }
//
//   return 0;
// }


///////////////////////////////////////////////

int main(){

  int n;
  cout<<"Enter a number to check for prime: "<<endl;
  cin>>n;
  int i;
  for(i=2; i<n; i++){
    if(n%i==0){
      break;
    }
  }
  if(i == n){
    cout<<"Prime Number"<<endl;
  }else{
    cout<<"Not Prime"<<endl;
  }

  return 0;
}
