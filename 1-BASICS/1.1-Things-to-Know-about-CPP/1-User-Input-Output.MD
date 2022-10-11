# **TAKING THE USER INPUT AND OUTPUT IN CPP**

* The only header file we will use in this course is: 

```cpp
// Basic Syntax for the CPP 
#include <bits/stdc++.h>
using namespace std;

int main(){
    //code
    return 0;
}
```

<hr>

## **How to take the user input and output from the user**

* **```Simply the numbers```**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n; // this will take the input from the user as an integer
    cout << n; // this will give an output to the console
    return 0;
}
```

* **```Arrays```**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n; // this will take the input from the user as an integer
    int arr[n];
    //taking input from the user in an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // output to the console 
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```