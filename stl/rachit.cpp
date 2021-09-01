#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void display(vector<int> &ref ){
  for (int i = 0; i < ref.size(); i++) {
    cout<<ref[i]<<" ";
  }
  cout<<endl;
}

int main(){

  vector<int> arr = { 11, 2, 3, 14};

  sort(arr.begin(), arr.end());

  bool present = binary_search(arr.begin(), arr.end(), 3);


  arr.push_back(100);
  arr.push_back(200);
  arr.push_back(200);
  arr.push_back(200);

  // 11, 2, 3, 14, 100, 200, 200, 200

  vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), 100);
  vector<int>::iterator it2 = upper_bound(arr.begin(), arr.end(), 100);

  cout << *it << " " << *it2 << endl; // 100 200
  cout << it2 << endl; //




  return 0;
}
