#include <bits/stdc++.h>
using namespace std;

int sum_recursion(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n; cin>>n;
    int sum = 0;
    sum = n*(n+1);
    cout << "Sum of " << n << " Natural numbers are: " << sum/2 << endl;
    cout << "Sum of " << n << " Natural numbers are: " << sum_recursion(n) << endl;
    return 0;
}