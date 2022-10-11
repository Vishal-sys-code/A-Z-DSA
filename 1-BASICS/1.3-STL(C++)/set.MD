# **SET**

A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes ```O(1)``` complexity in the average case and takes ```O(n)``` in the worst case.

**```Syntax:```**

```cpp
set<object_type> variable_name;
```

**```Example:```**

```cpp
set<int> s;
set<string> str;
```

<hr>

## **```Functions in set:```**

* **```insert(): ```** to insert an element in the set.
```cpp
set<int> s;
s.insert(1);
s.insert(2);
```

* **```begin():```**  return an iterator pointing to the first element in the set.
```cpp
s.begin();
```

* **```end(): ```**  returns an iterator to the theoretical element after the last element.
```cpp
s.end();
```

* **```count(): ```**  returns true or false based on whether the element is present in the set or not.
```cpp
set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true
```

* **```clear(): ```**  deletes all the elements in the set.
```cpp
s.clear();
```

* **```find(): ```**  to search an element in the set.
```cpp
set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end()){
    cout<<"true"<<endl;
}
```

* **```erase(): ```** to delete a single element or elements between a particular range.
```cpp
s.erase();
```

* **```size(): ```** returns the size of the set.
```cpp
s.size();
```

* **```empty()```** to check if the set is empty or not.
```cpp
s.empty();
```

<hr>

### **```CODE```**

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}
```

## **OUTPUT :**

```
Elements present in the set: 1 2 3 4 5 6 7 8 9 10

2 is present in set

Elements after deleting the first element: 2 3 4 5 6 7 8 9 10

The size of the set is: 9

The set is not empty

Size of the set after clearing all the elements: 0
```

<hr>

### **Other functions:**

* ```cbegin()``` it refers to the first element of the set.
* ```cend()```  it refers to the theoretical element after the last element of the set.
* ```rbegin()``` it points to the last element of the set.
* ```rend()``` it points to the theoretical element before the first element of the set.
* ```bucket_size()``` gives the total number of elements present in a specific bucket in a set.
* ```emplace()``` to insert an element in the set.
* ```max_size()``` the maximum elements a set can hold.
* ```max_bucket_count()``` to check the maximum number of buckets a set can hold.

<hr>