# 20. Valid Parentheses

https://leetcode.com/problems/valid-parentheses/

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.


Note that an empty string is also considered valid.

#### Example 1:
```
Input: "()"
Output: true
```

#### Example 2:
```
Input: "()[]{}"
Output: true
```

#### Example 3:
```
Input: "(]"
Output: false
```

#### Example 4:
```
Input: "([)]"
Output: false
```

#### Example 5:
```
Input: "{[]}"
Output: true
```


### My Thought: 


### Code: Only working under some situation
```java
class Solution {
    public boolean isValid(String s) {
        if(s.length() ==0) return true; 

        boolean flag = false; 

        Map<Character, Integer> map = new HashMap<Character, Integer>(); 

        for(char c:s.toCharArray()) {
            if(!map.containsKey(c)) {
                map.put(c, 1); 
            }
            else {
                int count = map.get(c); 
                count++; 
                map.put(c, count); 
            }
        }

        
        if( 
            (map.getOrDefault('(') + map.getOrDefault(')'))  % 2 == 0 ||
            (map.getOrDefault('[') + map.getOrDefault(']'))  % 2 == 0 ||
            (map.getOrDefault('{') + map.getOrDefault('}'))  % 2 == 0
          )
            return true; 
        else 
            return false; 

        //return flag; 
    }
}

```    


## Solution
```java
class Solution {
    // created a basic map with the values 
    public Map<Character, Character> map = new HashMap<Character, Character>(){
        {
        put('{', '}');
        put('[', ']');
        put('(', ')');
    }
};

    // check valid function
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for (char c : s.toCharArray()) {
            if (map.containsKey(c)) {
                stack.push(c);
            }
            else {
                if (stack.isEmpty()) {
                    return false;
                }

                char removed = stack.pop();
                if (map.get(removed) != c) {
                    return false;
                }
            }
        }

        return stack.isEmpty();
    }
}

```

```java

variable x = (expression) ? value if true : value if false

public generateFoo(int threshold)
{
    if(threshold > MIN_THRESHOLD)
       return new Foo();
    else
       return null;
}

// Above is the same as the following: 

public generateFoo(in threshold)
{
    return (threshold > MIN_THRESHOLD) ? new Foo() : null;
}
```



