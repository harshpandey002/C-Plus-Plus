#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int arr[n], s;
  cin>>s;

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }



/* BRUTE FORCE
int sum=arr[0];

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(sum == s){
        cout<<i<<" "<<j;
        return 0;
      }
      sum+=arr[j];
    }
    sum=0;
  }

*/

  // OPTIMIZED
  int i=0;
  int first_idx=0;
  int last_idx=0;
  int sum=0;


  for(i=0; i<=n; i++){

    if(sum<s){
      sum=sum + arr[i];
      last_idx++;
    }
    else if(sum==s){
      cout<<first_idx+1<<" "<<last_idx<<endl;
      break;
    }
    else {
      sum=sum-arr[first_idx];
      first_idx++;
      i--;
    }
  }
  
  if(i>n){
    cout<<"Not found"<<endl;
  }




  return 0;
}
