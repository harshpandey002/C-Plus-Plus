// There are N stones, numbered 1,2,...,N. For each i (1 <= i <= N), the height of the stone i is hi. Here, h1 < h2 < ... < hN holds.
//
// There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:
//
// The frog that is currently on Stone i can jump to one of the following stones - i+1,i+2,...,N such that a cost of (hj−hi)2 + C is incurred, where j is the stone to land on.
//
// Find the minimum possible total cost incurred before the frog reaches Stone N.
//
// Constraints
//
// 2 <= N <= 2×10^5
// 1 <= C <= 10^12
// 1 <= h1 < h2 < .... < hN <=10^6
// Input Format
// The first line contains 2 integers N and C. The second line contains N integers.
//
// Output Format
// Print the minimum possible total cost incurred before the frog reaches Stone N.

// Sample Testcase #0
// Testcase Input
//  5 6 1 2 3 4 5 
// Testcase Output
// 20
// Explanation
// If we follow the path 1 -> 3 -> 5, the total cost incurred would be ((3−1)^2+6)+((5−3)^2+6)=20. 

// Sample Testcase #1
// Testcase Input
// 25 4296
// 13 56 61 77 121 148 167 178 211 219 236 239 408 425 429 446 455 467 481 490 524 578 602 634 638 
// Testcase Output
// 93345


