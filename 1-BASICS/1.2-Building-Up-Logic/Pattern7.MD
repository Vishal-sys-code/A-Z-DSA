Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Ram an integer n and asked him to build a pattern.

Help Ram build a pattern.

 

**```Example 1:```**

Input: 
```5```

Output:
```
    *
   ***  
  *****
 *******
*********
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
            for(int j=n; j>i;j--){
                cout << " ";
            }
            //First Half
            for(int k=1; k<=i; k++){
                cout << "*";
            }
            //Second Half
            for(int l=2;l<=i;l++){
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