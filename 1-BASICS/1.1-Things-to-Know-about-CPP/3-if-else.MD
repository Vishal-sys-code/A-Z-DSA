# **IF-ELSE**

<p>Problem Link: <a href="https://practice.geeksforgeeks.org/problems/java-if-else-decision-making0924/0?category%5B%5D=Java&category%5B%5D=Java&difficulty%5B%5D=-2&page=1&query=category%5B%5DJavadifficulty%5B%5D-2page1category%5B%5DJava">if-else.gfg</a></p>


## **Solution**

```cpp

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if(n<m)
            return "lesser";
        else if(n == m)
            return "equal";
        else
            return "greater";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        Solution obj;
        cout << obj.compareNM(n,m) << endl;
    }
    return 0;
}
```
