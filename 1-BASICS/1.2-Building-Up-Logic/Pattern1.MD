# **Pattern-1**

Geek is very fond of patterns. Once, his teacher gave him a square pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a star pattern.

Example: 

Input: 

```5```

Output:

```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

<hr>

**CPP SOLUTION:** 

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printSquare(int n){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << "*";
                    cout << " ";
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
        ob.printSquare(n);
    }
    return 0;
}
```

**PYTHON SOLUTION**

```py
class Solution:
    def printSquare(self, N):
        for i in range(0,N):
                print("* "*N)

if __name == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printSquare(N)
```