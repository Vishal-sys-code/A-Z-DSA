/*

Problem Statement: Given an integer N , write program to count number of digits in N.

Example 1:
Input: N = 12345
Output: 5
Explanation: N has 5 digits

Example 2:
Input: N = 8394
Output: 4
Explanation: N has 4 digits
*/

#include <bits/stdc++.h>
using namespace std;

int count_digits(int N){
    int temp = N;
    int cnt = 0;
    while(temp != 0){
        temp/=10;
        cnt++;
    }
    return cnt;
}

int main(){
    int n; cin>>n;
    cout << count_digits(n) << endl;
    return 0;
}