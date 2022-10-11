/*
Problem Statement:  Given a number check if it is a palindrome.

An integer is considered a palindrome when it reads the same backward as forward.

Examples:

Example 1:
Input: N = 123
Output: Not Palindrome Number
Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.

Example 2:
Input: N =  121 
Output: Palindrome Number
Explanation: 121 read backwards as 121.Since these are two same numbers 121 is a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int temp = n;
    int rev = 0,rem;
    while(n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    return rev;
}

int main(){
    int n; cin>>n;
    int temp = n;
    int y = reverse(n);
    if(temp == y){
        cout << "Palindrome Number" << endl;
    }
    else{
        cout << "Not a Palindrome Number" << endl;
    }
    return 0;
}

/*
Time Complexity: O(logN) for reversing N digits of input integer.

Space Complexity: O(1)
*/