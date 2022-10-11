/*
Problem Statement: Given a number, check if it is Armstrong Number or Not.

Examples:

Example 1:
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153

Input:170 
Output: No, it is not an Armstrong Number
Explanation: 1^3 + 7^3 + 0^3 != 170
*/

#include <bits/stdc++.h>
using namespace std;

bool ArmstrongNumber(int n){
    int originalN = n;
    int temp = n;
    int cnt = 0,digit;
    int sumofPower = 0;
    while(temp!=0){
        cnt++;
        temp/=10;
    }
    while(n!=0){
        digit = n%10;
        sumofPower += pow(digit,cnt);
        n/=10;
    }
    return(sumofPower == originalN);
}

int main(){
    int n; cin>>n;
    if(ArmstrongNumber(n)){
        cout << "ARMSTRONG NUMBER" << endl;
    }
    else{
        cout << "NOT AN ARMSTRONG NUMBER" << endl;
    }
    return 0 ;
}