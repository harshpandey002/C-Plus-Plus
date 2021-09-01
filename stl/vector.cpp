#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &ref ){
  for (int i = 0; i < ref.size(); i++) {
    cout<<ref[i]<<" ";
  }
  cout<<endl;
}

int main(){
  vector<int> arr = {1, 2, 3, 4};

  vector<int> arr2 = arr;

  display(arr2);

	return 0;
}
