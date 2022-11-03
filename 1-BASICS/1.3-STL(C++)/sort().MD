Sorting is one of the most standard operations used very frequently while writing programs. Writing the complete sorting algorithm might be time consuming and hence STL provides us with a standard inbuilt function to sort any container very easily.

Time Complexity: ```O(nlogn)```

**Benefits of using sort():**

* Ease of implementation, omits writing lengthy code to implement different sorting algorithms.
* Need not to worry about time complexity, it’s one of the most efficient functions with a N*logN time complexity and uses a mix of quicksort and mergesort in its internal implementation.

**Syntax:** 
```cpp
sort(start_iterator, end_iterator)
```

The ```sort()``` function in STL accepts two mandatory parameters: **begin**, and **end**, and sorts the range with-in the container in ascending order by default.
```cpp
sort(begin, end)
```
**begin:** It is an iterator pointing to the first element of a container.
**end:** It is an iterator pointing to element just after the last element of the container.

**Example 1:**
```
int arr[] = {4,2,1}

sort(arr, arr+3);

Output: arr[] = {1,2,4}
```

**Example 2:**
```
vector<int> vec = {4,2,1}

sort(vec.begin(), vec.end());

Output: vec = {1,2,4}
```
<hr>

# **Ascending Order Sorting**

## **Code:**
```cpp
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
```

## **Output:**
```
1 2 4
```

The above is the **Ascending Order** sorting of the array.

In STL, we already have a comparator defined to do this which is called ```greater()```. 
We just need to pass this:
```cpp
greater<container_data_type>()
``` 
as the third parameter to sort function as shown in the below codes and it will sort the comparator in descending order.

<hr>

# **Descending Order Sorting**

```cpp
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3, greater<int>());
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
```

```cpp
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(vec.begin(), vec.end(), greater<int>());
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
```

## **Output:**
```
4 2 1
```
<hr>

# **Custom Order Sorting**

Use comparator function

```cpp
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
```

## **Code:**
```cpp
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main() {
    
    vector<pair<int, int> > vec = {{10,3}, {20, 1}, {30, 2}};
    
    sort(vec.begin(), vec.end(), sortbysec);
    
    for(int i=0; i<3; i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
    }
    
    return 0;
}
```

## **Output:**
```
20 1
30 2
10 3
```