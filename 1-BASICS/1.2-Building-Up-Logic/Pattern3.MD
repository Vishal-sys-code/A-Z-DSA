Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a pattern.

 

**```Example 1:```**

Input: 

```5```

Output:

```
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
```
 
<hr>

```cpp

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printTriangle(int n) {
        int k;
        for(int i=0;i<n;i++){
            k = 1;
            for(int j=0;j<=i;j++){
                cout << k << " ";
                k++;
            }
            cout << endl;
        }
    }
};


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Solution ob;
        ob.printTriangle(n);
    }
}
```
