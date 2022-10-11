/*
Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives remainder as zero when divided.

Examples:

Example 1:
Input: n = 36
Output: 1 2 3 4 6 9 12 18 36
Explanation: All the divisors of 36 are printed.

Example 2:
Input: n = 97
Output: 1 97
Explanation: Since 97 is a prime number, only 1 and 97 are printed.
*/

#include <bits/stdc++.h>
using namespace std;

void divisors(int n){
    cout << "The number of divisors of " << n << " are: "<< endl;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout << i << " ";
        }
        // cout << endl;
    }
}

int main(){
    int n; cin>>n;
    divisors(n);
    return 0;
}