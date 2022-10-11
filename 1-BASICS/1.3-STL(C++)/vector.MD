# **VECTOR**

Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.

## **```Syntax```**
```cpp
vector<object_type> variable_name;
```

**```Example:```**

```cpp
vector<int> v1;
vector<char> v2;
vector<string> v3;
```
### **Most used functions in Vector :**
<br>

* **```begin()```** it returns an iterator pointing to the first element of the vector.
```cpp
auto iterator = itr;
itr = v1.begin();
```

* **```end()```** it returns an iterator pointing to the element theoretically after the last element of the vector.

```cpp
auto iterator = itr;

itr = v1.end();
```

* **```push_back()```** it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.

```cpp
vector<int> v1;

v1.push_back(1);
v1.push_back(2);
```

* **```insert()```** it is used to insert an element at a specified position.

```cpp
auto it= v1.begin();
v1.insert(it,5); //inserting 5 at the beginning
```

* **```erase()```** it is used to delete a specific element.
```cpp
vector<int> v1;
auto it= v1.begin();
v1.erase(it);// erasing the first element
```

* **```pop_back()```** it deletes the last element and returns it to the calling function.
```cpp
v1.pop_back();
```

* **```front()```** it returns a reference to the first element of the vector.
```cpp
v1.front();
```

* **```back()```** it returns a reference to the last element of the vector.
```cpp
v1.back();
```

* **```clear()```** deletes all the elements from the vector.
```cpp
v1.clear();
```

* **```empty()```** to check if the vector is empty or not.
```cpp
v1.empty();
```

* **```size()```** returns the size of the vector
```cpp
v1.size();
```

## **CODE :**

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}
```

## **OUTPUT :**

```
The elements in the vector: 0 1 2 3 4 5 6 7 8 9
The front element of the vector: 0
The last element of the vector: 9
The size of the vector: 10
Deleting element from the end: 9
Printing the vector after removing the last element:
0 1 2 3 4 5 6 7 8
Inserting 5 at the beginning:
The first element is: 5
Erasing the first element
Now the first element is: 0
vector is not empty
Size of the vector after clearing the vector: 0
```

**Other functions:**

* **```cbegin()```**  – it refers to the first element of the vector.

* **```cend()```** – it refers to the theoretical element after the last element of the vector.

* **```rbegin()```** – it points to the last element of the vector.

* **```rend()```** – it points to the theoretical element before the first element of the vector.

* **```crbegin()```** – it refers to the last element of the vector.

* **```crend()```** – it refers to the theoretical element before the first element of the vector.

* **```max_size()```** – returns the maximum size the vector can hold.

* **```capacity()```** – it returns the current capacity of the vector