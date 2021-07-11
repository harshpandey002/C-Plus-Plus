#include <iostream>
using namespace std;

int main(){

  int n, m, k;
  cin>>n>>m>>k;

  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>arr[i][j];
    }
  }

  int i=n-1, j=0;
  while(j<m || i>0) {
    if(k == arr[i][j]){
      cout<<"true";
      return 0;
    }else if(k < arr[i][j]){
      i--;
    }else{
      j++;
    }
  }

/*

4 4 15
1 4 7 11
2 5 8 12
3 6 9 16
10 13 14 17

*/

  cout<<"false"<<endl;
  return 0;
}
