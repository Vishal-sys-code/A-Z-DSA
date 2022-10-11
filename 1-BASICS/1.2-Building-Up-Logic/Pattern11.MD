Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a star pattern.

 

**```Example 1:```**

Input: ```5```

Output:
```
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1
```

<hr>

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void printTriangle(int n) {
        int x;
        for(int i=1;i<=n;i++){
            if(i%2 == 0){
                x = 0;
            }
            else{
                x = 1;
            }
            for(int j=1; j<=i; j++){
                cout << x << " ";
                x=!x;
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