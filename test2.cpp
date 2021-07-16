// There are N stacks each consisting of different number of plates.
//
//  The cook defines a special game called "Picker" which has the following rules:
//
// He may choose two positions with index i and an index j and pick one plate of every    stack index from i to j provided each stack contains at least one plate.
// He may perform the operations any number of times. The game ends when there are no plates left.
// You need to find the minimum number of moves required by the game "Picker" to get rid of all her plates.
//
// Input Format
// The first line of input contains an integer N (1 ≤ N ≤ 10^5)
//
//  Next line contains N space-separated integers specifying the number of plates in the stack.
//
// Output Format
// Output the minimum number of moves required by the game to get rid of all her plates.
//
//
//
// Sample Testcase #0
// Testcase Input
// 5
// 3 5 2 3 4
// Testcase Output
// 7
// Explanation
// The cook can play in the following manner :
//
// 1)move from 1 to 5
//
// 2)move from 1 to 5
//
// 3)move from 1 to 2
//
// 4)move from 4 to 5
//
// 5)move from 2 to 2
//
// 6)move from 2 to 2
//
// 7) move from 5 to 5
//
//  A total of 7 rounds necessary to get rid of all her plates.
//
// Sample Testcase #1
// Testcase Input
// 2
// 8 20
// Testcase Output
// 20

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count(int arr, int s, int e){

    if(s == e){
        return arr[s];
    } else if(s < e){

        int mi = 0;
        int idx, t;

        for(int i=s; i<=e; i++){
            if(arr[i] < mi){
                mi = arr[i];
                idx = i;
            }
        }

        for(int i=s; i<e; i++){
            arr[i]-=mi;
        }

        return min + count(arr[], s, idx-e) + count(arr[], s+idx, e);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << count(arr[], 0, n-1);

    return 0;
}
