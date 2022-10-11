/*
Problem Statement: Find gcd of two numbers.

Examples:

Example 1:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.

Example 2:
Input: num1 = 3, num2 = 6
Output: 3
Explanation: Since 3 is the greatest number which divides both num1 and num2.
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

/*
for gcd() function ⬆️ 

Time Complexity: O(logɸmin(a,b)),where ɸ is 1.61.

Space Complexity: O(1).
*/

int main(){
    int a,b; cin>>a>>b;
    int ans = __gcd(a,b);
    cout << "GCD of two elements: " << ans << endl;
    return 0;
}