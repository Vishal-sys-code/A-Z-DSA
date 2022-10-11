#include <bits/stdc++.h>
using namespace std;


string rev(string s){
    int n = s.length();
    string ans;
    for(int i = n-1; i>=0;i--){
        ans.push_back(s[i]);
    }
    return ans;
}

int main(){
    string s; cin>>s;
    // string rev = reverse(s.begin(), s.end());
    if(s == rev(s)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}