# **QUEUE**

*A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear. The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.*


## **Syntax** 
```cpp
queue<object_type> variable_name; 
```
### **Example:**
```cpp
queue<int> q;
queue<string> q;
```
## **Functions in queue:**

* **```push() :```** to insert an element in the queue.
```cpp
queue<int> q
q.push(110);
q.push(220);
```

* **```pop() :```** deletes the first element of the queue.
```cpp
q.pop();
```

* **```front() :```** returns the first element in the queue.
```cpp
q.front();
```

* **```back() :```** returns the last element in the queue.
```cpp
q.back();
```

* **```emplace() :```** to insert an element in the queue.
```cpp
queue<int> q;
q.emplace(1);
q.emplace(2);
```

* **```size() :```** returns the number of elements on the queue.
```cpp
q.size();
```

* **```empty() :```** returns true if the queue is empty.
```cpp
q.empty();
```