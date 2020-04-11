# 155. Min Stack

https://leetcode.com/problems/min-stack/

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

* push(x) -- Push element x onto stack.
* pop() -- Removes the element on top of the stack.
* top() -- Get the top element.
* getMin() -- Retrieve the minimum element in the stack.


#### Example:

```
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.
```

### My Thought: 
Stack is a data structure with last in first out (LIFO)


### Code: 
```java
class MinStack {

    /** initialize your data structure here. */
    public MinStack() {
        
    }
    
    public void push(int x) {
        
    }
    
    public void pop() {
        
    }
    
    public int top() {
        
    }
    
    public int getMin() {
        
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

```    


## Solution
https://www.youtube.com/watch?v=WxCuL3jleUA

```java
class MinStack {

    Stack<Integer> stack = new Stack<Integer>(); //track all the regular elements 
    Stack<Integer> min_vals = new Stack<Integer>(); //track all the minimum stacks

    /** initialize your data structure here. */
    public MinStack() {
        Stack<Integer> stack = new Stack<Integer>(); 
        Stack<Integer> min_vals = new Stack<Integer>(); 
    }
    
    public void push(int x) {
        //putting in the value into the stack 
        if(min_vals.isEmpty() || x<=min_vals.peek()){
            min_vals.push(x); 
        }
        stack.push(x); 
    }
    
    public void pop() {
        // get it out
        if(stack.peek().equals(min_vals.peek())) {
            min_vals.pop(); 
        }
        stack.pop(); 
    }
    
    public int top() {
        return stack.peek(); //built in method 
    }
    
    public int getMin() {
        return min_vals.peek(); 
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

``` 

#### Logic: 
```
Set up regular stack and another stack to track the minimum value 

minStack.push(x); 
    put the x into the stack when x can be the minimum value 

minStack.getMin();
    get the minimum value 

minStack.pop();
    when the stack value is equal to the minimum val, pop it out 

minStack.top();
    get the top value in the stack 

```

#### Second Time: 
```java
class MinStack {

    /*
    Set up regular stack and another stack to track the minimum value 

    minStack.push(x); 
        put the x into the stack when x can be the minimum value or if the stack is empty 

    minStack.getMin();
        get the minimum value 

    minStack.pop();
        when the stack value is equal to the minimum val, pop it out 

    minStack.top();
        get the top value in the stack 
    */
    
    /** initialize your data structure here. */
    Stack<Integer> stack = new Stack<Integer>(); 
    Stack<Integer> min_val = new Stack<Integer>();
        
    public MinStack() {
        Stack<Integer> stack = new Stack<Integer>(); 
        Stack<Integer> min_val = new Stack<Integer>();
    }
    
    public void push(int x) {
        if( min_val.isEmpty() || x<=min_val.peek() )
            min_val.push(x); 
        
        stack.push(x); 
    }
    
    public void pop() {
        if(stack.peek().equals(min_val.peek())) 
            min_val.pop(); 
        
        stack.pop(); 
    }
    
    public int top() {
        return stack.peek(); 
    }
    
    public int getMin() {
        return min_val.peek(); 
    }
}



/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
 ```

#### Notes: 


