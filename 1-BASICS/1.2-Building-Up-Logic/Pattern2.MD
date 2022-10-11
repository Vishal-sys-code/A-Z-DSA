# **Pattern-2**

Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a star pattern.

 

Example 1:

Input: 

```5```

Output:

```
* 
* * 
* * * 
* * * * 
* * * * *
```

<hr>

**CPP SOLUTION**

```cpp

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printTriangle(int n) {
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                    cout << "* ";
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
    return 0;
}
```

**PYTHON SOLUTION**

```py
class Solution:
    def printTriangle(self, N):
        for i in range(1,N+1):
            for j in range(1,i+1):
                 print("*", end = " ")
            print()


if __name == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printTriangle(N)
```