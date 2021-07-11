#include <iostream>
using namespace std;

int main(){

  int n, m;
  cin>>n>>m;

  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>arr[i][j];
    }
  }

  int a=0, b=0, c=m-1, d=n-1, x=0;

  while (x < n*m ) {

    for (int j = b; j <= c; j++) {
      cout<<arr[a][j]<<" ";
    }

    for (int i = a+1; i <= d; i++) {
      cout<<arr[i][c]<<" ";
    }

    for (int j = c-1; j >= b; j--) {
      cout<<arr[d][j]<<" ";
    }

    for (int i = d-1; i > a; i--) {
      cout<<arr[i][b]<<" ";
    }
    a++;
    c--;
    d--;
    b++;

    x++;
  }

  /*

  5 6
  1 5 7 9 10 11
  6 10 12 13 20 21
  9 25 29 30 32 41
  15 55 59 63 68 70
  40 70 79 81 95 105

  */


  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }


  return 0;
}
