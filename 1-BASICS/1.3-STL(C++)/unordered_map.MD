# **UNORDERED MAP**

*unordered_map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value. The elements can be in any order.*

## **Syntax**

```cpp
unordered_map<object_type,object_type> variable_name;
```

### **Example:**
```cpp
unordered_map<int,int> mpp;
unordered_map<string,int> mpp;
```

## **Functions in unordered map:**

* **```insert() :```** to insert an element in the unordered map.

```cpp
unordered_map<int,int> mp;
mp.insert({1,10});
mp.insert({2,20});
```

* **```begin() :```** return an iterator pointing to the first element in the unordered map.

```cpp
mp.begin();
```

* **```end() :```** returns an iterator to the theoretical element after the last element.

```cpp
mp.end();
```

* **```clear() :```** deletes all the elements in unordered map.

```cpp
mp.clear();
```

* **```find() :```** to search an element in the unordered map.

```cpp
unordered_map<int,int> mp;
mp.insert({1,10});
mp.insert({2,20});
if(mp.find(2)!=mp.end()){
    cout<<"true"<<endl;
}
```
* **```erase() :```** to delete a single element or elements between a particular range.
```cpp
mp.erase(key);
mp.erase(iterator position);
mp.erase(iterator position 1, iterator position 2);
```

* **```size() :```** returns the size of the unordered map.
```cpp
mp.size();
```

* **```empty() :```** to check if the unordered map is empty or not.
```cpp
mp.empty();
```
## **CODE :**

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
  unordered_map < int, int > mp;
   for (int i = 1; i <= 5; i++) {
    mp.insert({ i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in map" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;
  mp.clear();
  cout << "Size of the set after clearing all the elements: " << mp.size();
}
```

## **OUTPUT :**

```txt
Output:

Elements present in the map:

Key Element
5 50
4 40
3 30
2 20
1 10
2 is present in map

Elements after deleting the first element:

Key Element
4 40
3 30
2 20
1 10

The size of the map is: 4

The map is not empty

Size of the set after clearing all the elements: 0
```

**Other functions:**

* **```cbegin()```** it refers to the first element of the unordered_map.

* **```cend()```** it refers to the theoretical element after the last element of the unordered_map.

* **```rbegin()```** it points to the last element of the unordered_map.

* **```rend()```** it points to the theoretical element before the first element of the unordered_map.

* **```emplace()```** to insert an element in the unordered_map.

* **```max_size()```** the maximum elements an unordered_map can hold.