# **MUTLIMAP**

*Multimap in STL are associative containers like maps where each element consists of a key value and a mapped value, the only difference is multimaps can store duplicate elements*

## **Syntax**

```cpp
multimap<object_type,object_type> variable_name;
```

### **Example:**
```cpp
multimap<int,int> mpp;
multimap<string,int> mpp;
```

## **Functions in multimap map:**

* **```insert() :```** to insert an element in the multimap.

```cpp
multimap<int,int> mp;
mp.insert({1,10});
mp.insert({2,20});
```

* **```begin() :```** return an iterator pointing to the first element in the multimap.

```cpp
mp.begin();
```

* **```end() :```** returns an iterator to the theoretical element after the last element.

```cpp
mp.end();
```

* **```clear() :```** deletes all the elements in multimap.

```cpp
mp.clear();
```

* **```find() :```** to search an element in the multimap.

```cpp
multimap<int,int> mp;
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

* **```size() :```** returns the size of the map.
```cpp
mp.size();
```

* **```empty() :```** to check if the map is empty or not.
```cpp
mp.empty();
```
## **CODE :**

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
  multimap < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }
  mp.insert({4,40});

  cout << "Elements present in the multimap: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in multimap" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the multimap is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The multimap is not empty " << endl;
  else
    cout << "The multimap is empty" << endl;
  mp.clear();
  cout << "Size of the multimap after clearing all the elements: " << mp.size();
}
```

## **OUTPUT :**

```txt
Output:

Elements present in the multimap:

Key Element
1      10
2      20
3      30
4      40
4      40
5      50
2 is present in multimap

Elements after deleting the first element:

Key Element
2      20
3      30
4      40
4      40
5      50

The size of the multimap is: 5

The multimap is not empty

Size of the multimap after clearing all the elements: 0

```

**Other functions:**

* **```cbegin()```** it refers to the first element of the multimap.

* **```cend()```** it refers to the theoretical element after the last element of the multimap.

* **```rbegin()```** it points to the last element of the multimap.

* **```rend()```** it points to the theoretical element before the first element of the multimap.

* **```emplace()```** to insert an element in the multimap.

* **```max_size()```** the maximum elements an multimap can hold.