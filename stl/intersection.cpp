#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void display(vector<int> &ref ){
  cout<< "[ ";
  for (int i = 0; i < ref.size(); i++) {
    cout<<ref[i]<<" ";
  }
  cout<<"]"<<endl;
}

int main(){

  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9,4,9,8,4};

       vector<int> arr;
       vector<int> arr1;
       vector<int> arr2;
       bool present;
       vector<int>::iterator it;

       if(nums1.size() >= nums2.size()){
           arr1 = nums1;
           arr2 = nums2;
       }else{
           arr1 = nums2;
           arr2 = nums1;
       }

       display(arr1);
       display(arr2);

       for(int i=0; i<arr2.size(); i++){
         // cout<<i<<endl;
           present = binary_search(arr1.begin(), arr1.end(), 4);
           // cout<< arr2[i] << " "<< present << endl;
           // if(present){
           //
           //     arr.push_back(arr2[i]);
           //
           //     cout<<i<<endl; // 0
           //     display(arr); // [ 4 ]
           //
           //     it = lower_bound(arr1.begin(), arr1.end(), arr2[i]);
           //
           //     int idx = it - arr1.begin();
           //
           //     cout<< i << " " << idx << endl; // 0 1
           //
           //     if( i != arr2.size()-1 && idx != arr1.size()-1 ){
           //         if(arr2[i] == arr1[idx]){
           //             arr.push_back(arr2[i+1]);
           //             display(arr);
           //         }else{
           //             arr.clear();
           //         }
           //     }
           // }

       }
       return 0;
    }
