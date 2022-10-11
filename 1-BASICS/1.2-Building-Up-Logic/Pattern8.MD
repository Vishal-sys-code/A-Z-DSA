Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a pattern.

 

**```Example 1:```**

Input: ```5```

Output:
```

*********
 *******
  *****
   ***
    *

```

<hr>

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void printTriangle(int n) {
        for(int i=1;i<=n;i++){
	        // Space
            for(int j=1; j<i;j++){
                cout << " ";
            }
            // Mirror Image of Patterns
            for(int k = 2*(n-i+1)-1; k>0; k--){
                cout << "*";
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