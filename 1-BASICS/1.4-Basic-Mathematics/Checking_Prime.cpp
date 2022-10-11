/*
Problem Statement: Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

Examples 1 2 3 5 7 11 13 17 19 …

Examples:

Example 1:
Input: N = 3
Output: Prime
Explanation: 3 is a prime number

Example 2:
Input: N = 26
Output: Non-Prime
Explanation: 26 is not prime
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n/2;++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool isPrime1(int n){
    for(int i=2;i<sqrt(n);++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin>>n;
    bool ans = isPrime(n);
    if(n!=1 and ans == 1){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}