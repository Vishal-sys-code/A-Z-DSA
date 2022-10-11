/*
Problem Statement: Given a number N reverse the number and print it.

Examples:

Example 1:
Input: N = 123
Output: 321
Explanation: The reverse of 123 is 321

Example 2:
Input: N = 234
Output: 432
Explanation: The reverse of 234 is 432
*/

#include <bits/stdc++.h>
using namespace std;


int reverse_using_string(int n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int x = stoi(s);
    return x;
}

int main(){
    int n; cin>>n;
    // int temp = n;
    // int rev = 0,rem;
    // while(n!=0){
    //     rem = n%10;
    //     rev = rev*10+rem;
    //     n/=10;
    // }
    // cout << rev << endl;
    cout << "Using Function=> reverse_using_string(): " << reverse_using_string(n) << endl;
    return 0;
}