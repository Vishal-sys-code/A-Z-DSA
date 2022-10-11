#include <bits/stdc++.h>
using namespace std;

void forwardNumber(int n){
    if(n == 0) return;
    forwardNumber(n-1);
    cout << n << " ";
}

void backNumber(int n){
    if(n == 0) return;
    cout << n << " ";
    backNumber(n-1);
}

int main(){
    int n; 
    cin>>n;
    cout << "FORWARD PASS" << endl;
    forwardNumber(n);
    cout << endl;
    cout << "----------" << endl;
    cout << "BACKWARD PASS" << endl;
    backNumber(n);
    cout << endl;
    return 0;
}

/*
Time Complexity:O(n).

Reason: Since the base condition is achieved only when n goes to 0, it takes n+1 recursive calls to reach 0.

Space Complexity: O(n).

Reason: We are using recursion which will internally use the stack. When n is at 0(n+1 recursive call), we would have made n recursive calls already and every function’s local variables are stored in the stack, which makes the linear space complex.
*/