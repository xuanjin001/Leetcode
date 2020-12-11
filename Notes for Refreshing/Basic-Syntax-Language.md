# Baisc Syntax Java: 

* [stack](https://www.educative.io/edpresso/how-to-use-the-stack-class-in-java)
    * create <br>
    ```java
    Stack<dataType> stackName = new Stack<>();
    ```

    * add elements

    The `push()` method pushes an element, that is passed as the parameter, on the top of the stack.

    * get out elements 

    The `pop()` method removes and returns the top element of the stack.

    An `EmptyStackException` exception is thrown if we call the `pop()` method on an empty stack.

    **peek():** The `peek()` method returns the element on the top of the stack but does not remove it.

    * see if it is empty

    The `empty()` method returns `true` if the stack is empty, otherwise, it returns `false`.

    * search 

    The `search()` method determines whether an object, which is the input parameter of the function, exists in the stack or not.

    If the element is found, it returns the position (as an `integer`) of the element from the top of the stack otherwise it returns -1.


Example: 
```java
import java.util.*; //importing the stack class
class MyClass{
  public static void main (String[] args) 
  { 
    // Creating a Stack
    Stack<Integer> even = new Stack<>();
    // pushing values in stack
    even.push(0);
    even.push(2);
    even.push(4);
    even.push(6);
    even.push(8);
    even.push(10);
    even.push(12);
    even.push(14);
    even.push(16);

    //printing the stack
    System.out.println("Print Stack before pop:");
    System.out.println(even);
    // returning the number at the top of the stack and removing it
    System.out.println("pop => " + even.pop());
    System.out.println("pop => " + even.pop());
    System.out.println("pop => " + even.pop());
    //printing the stack
    System.out.println("Print Stack after pop:");
    System.out.println(even);
    // accessing the number at the top of the stack but not removing it
    System.out.println("Number on top of the stack is => " + even.peek());
    // checking if the stack is empty or not
    System.out.println("Is stack empty?  Ans:" + even.empty());
    // checking the position of 8 in the stack
    System.out.println("Position of 8 from the top is " + even.search(8));
    // check if 20 exists in the stack
    System.out.println("Position of 20 from the top is " + even.search(20));
  }
}

```

```
Output: 
Print Stack before pop:
[0, 2, 4, 6, 8, 10, 12, 14, 16]
pop => 16
pop => 14
pop => 12
Print Stack after pop:
[0, 2, 4, 6, 8, 10]
Number on top of the stack is => 10
Is stack empty?  Ans:false
Position of 8 from the top is 2
//when an element cannot be found 
Position of 20 from the top is -1 

```

* [queue](https://www.educative.io/edpresso/what-is-the-java-queue-interface) : [additional material with linked list](http://tutorials.jenkov.com/java-collections/queue.html)

    * create

    Create a queue with LinkedList or PriorityQueue

    ```
    Queue queueA = new LinkedList();
    Queue<MyObject> queue = new LinkedList<MyObject>();

    Queue queueB = new PriorityQueue();
    ```
    
    * add elements

    * get out elements 
    * see if it is empty

[PriorityQueue](https://www.javatpoint.com/java-priorityqueue)

[LinkedList](https://www.educative.io/blog/data-structures-stack-queue-java-tutorial#implement-q)

* map
    * create
    ```java
    HashMap<String, String> capitalCities = new HashMap<String, String>();

    ```
    * add elements
    ```java
    // Add keys and values (Country, City)
    capitalCities.put("England", "London");
    ```

    * get out elements 
    ```java
    capitalCities.get("England");
    ```

    * remove an element
    ```java
    capitalCities.remove("England");
    ```

    * see if it is empty
    ```java
    capitalCities.size();
    //when size is 0
    ```

    * clear a map 
    ```java
    capitalCities.clear();
    ```

    * loop
    ```java
    // Print keys
    for (String i : capitalCities.keySet()) {
        System.out.println(i);
    }

    // Print values
    for (String i : capitalCities.values()) {
        System.out.println(i);
    }

    // Print keys and values
    for (String i : capitalCities.keySet()) {
        System.out.println("key: " + i + " value: " + capitalCities.get(i));
    }

    ```


* sort
    * int order
    * string order
    * customized order

    ```java
    // Create a list of strings 
        ArrayList<String> al = new ArrayList<String>(); 
        al.add("Geeks For Geeks"); 
        al.add("Friends"); 
        al.add("Dear"); 
        al.add("Is"); 
        al.add("Superb"); 
  
    /* Collections.sort method is sorting the 
        elements of ArrayList in ascending order. */
        Collections.sort(al); 
    
    /* Collections.sort method is sorting the 
        elements of ArrayList in ascending order. */
        Collections.sort(al, Collections.reverseOrder()); 
    
    ```

    ```java
    // Our arr contains 8 elements
    int[] arr = {13, 7, 6, 45, 21, 9, 101, 102};
    
    // Ascending order
    Arrays.sort(arr);

    // Sorts arr[] in descending order
    Arrays.sort(arr, Collections.reverseOrder());

    // Our arr contains 8 elements
    int[] arr = {13, 7, 6, 45, 21, 9, 2, 100};
 
    // Sort subarray from index 1 to 4, i.e.,
    // only sort subarray {7, 6, 45, 21} and
    // keep other elements as it is.
    Arrays.sort(arr, 1, 5);
    // output 
    // Modified arr[] : [13, 6, 7, 21, 45, 9, 2, 100]
    
    ```


* [math](https://www.w3schools.com/java/java_ref_math.asp)
    * max value
        * Number
        * Bit
    * min value 
        * Number
        * Bit



* copy
    * copy an array
    ```java
    int a[] = {1, 8, 3}; 
  
    // Create an array b[] of same size as a[] 
    int b[] = new int[a.length]; 
  
    // Copy elements of a[] to b[] 
    for (int i=0; i<a.length; i++) 
        b[i] = a[i]; 
    ```
    ```java
    // Copy elements of a[] to b[] 
    int b[] = a.clone();
    ```
    ```java
    // Copy elements of a[] to b[] 
    System.arraycopy(a, 0, b, 0, 3); 
    ```
    [array copy](https://www.tutorialspoint.com/Array-Copy-in-Java)


* Common usage in the following types: 
    * byte to number
    * number to byte 
    * string to number
    * number to string 

    * [String Operations](https://www.w3schools.com/java/java_ref_string.asp)
        * charAt()
        * compareTo()
        * concat()
        * contains()
        * contentEquals()
        * copyValueOf()
        * endsWith()
        * equals()
        * equalsIgnoreCase()
        * getBytes()
        * getChars()
        * hashCode()
        * IndexOf()
        * isEmpty()
        * lastIndexOf()
        * length()
        * matches()
        * replace()
        * replaceAll()
        * split()
        * startsWith()
        * substring()
        * toCharArray()
        * toLowerCase()
        * toString()
        * toUpperCase()
        * trim()
        * valueOf()

    

# Baisc Syntax Python: 

* [stack](https://www.educative.io/edpresso/how-to-implement-stack-in-python)
    * create
    * add elements
    * get out elements 
    * see if it is empty

```python
list=[]
list.append(1) # append 1
print("push:",list)
list.append(2) # append 2
print("push:",list)
list.append(3) # append 3
print("push:",list)
list.pop() # pop 3
print("pop:",list)
print("peek:",list[-1]) # get top most element
list.pop() # pop 2
print("pop:",list)
print("peek:",list[-1]) # get top most element
```
```
// output
push: [1]
push: [1, 2]
push: [1, 2, 3]
pop: [1, 2]
peek: 2
pop: [1]
peek: 1
```

To see if a Stack is empty in python: 
```python
if not a:
  print("List is empty")
```

* [queue](https://www.educative.io/edpresso/how-to-implement-a-queue-in-python)
    * create
    * add elements
    * get out elements 
    * see if it is empty

```python
list=[]
list.append(1) # append 1
print("enqueue:",list)
list.append(2) # append 2
print("enqueue:",list)
list.append(3) # append 3
print("enqueue:",list)
list.pop(0) # pop 1
print("dequeue:",list)
print("peek:",list[-1]) # get top most element
list.pop(0) # pop 2
print("dequeue:",list)
print("peek:",list[-1]) # get top most element
```

```
// output
enqueue: [1]
enqueue: [1, 2]
enqueue: [1, 2, 3]
dequeue: [2, 3]
peek: 3
dequeue: [3]
peek: 3
```

Time complexity
The time complexity for all list operations for implementing queue i.e., `append`,`pop` and `list[-1]` is: O(1)


* [map](https://www.educative.io/edpresso/how-to-use-the-map-function-in-python)
    * create
    * add elements
    * get out elements 
    * see if it is empty

map(function, iterable)

```python
#function to double the value passed to it
def doubler(x): 
    return x * 2

#creating a list
my_list = [1, 3, 5, 2, 4]

#map function takes the function doubler and the iterable my_list
#map will pass each element of my_list to doubler function
result = map(doubler, my_list)

#prints a list containing the doubled values
print(result) 
```

Results: 
```
[2, 6, 10, 4, 8]
```

```python
#converting map object to set
#result here is the final answer we got in the above code
result = [2, 6, 10, 4, 8]

print ("Converting to set")
answer1 = set(result)
print(answer1)
```
Result: 
```
Converting to set
{8, 2, 10, 4, 6}
```
When you run the code above, the output will be displayed as a `set` instead of a `list`.


Check if any structure is empty: 
```python
def is_empty(any_structure):
    if any_structure:
        print('Structure is not empty.')
        return False
    else:
        print('Structure is empty.')
        return True
        
a = []
is_empty(a)

if a:
  print('structure is not empty')
else: 
  print('empty')
```


[linkedlist](https://www.educative.io/courses/ds-and-algorithms-in-python/qAlJqORgZLG)


* [list](https://www.programiz.com/python-programming/list)
```python
# List indexing

my_list = ['p', 'r', 'o', 'b', 'e']

# Output: p
print(my_list[0])

# Output: o
print(my_list[2])

# Output: e
print(my_list[4])

# Nested List
n_list = ["Happy", [2, 0, 1, 5]]

# Nested indexing
print(n_list[0][1])

print(n_list[1][3])

# Error! Only integer can be used for indexing
print(my_list[4.0])
```
Output: 
```
p
o
e
a
5
Traceback (most recent call last):
  File "<string>", line 21, in <module>
TypeError: list indices must be integers or slices, not float
```


* [sort](https://docs.python.org/3/howto/sorting.html)
    * int order
    * string order
    * customized order


* math
    * max value
        * Number
        * Bit
    * min value 
        * Number
        * Bit



* copy
    * [copy an list](https://www.programiz.com/python-programming/methods/list/copy)

    ```python
    old_list = [1, 2, 3]
    new_list = old_list
    ```
    

* Common usage in the following types: 
    * [byte to number](https://wiki.python.org/moin/BitManipulation)
    * number to byte 
    * [string to number](https://realpython.com/convert-python-string-to-int/)
    * number to string 






# Notes: 
Search method: python create map https://www.educative.io/