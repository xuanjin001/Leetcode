# 678. Valid Parenthesis String

https://leetcode.com/problems/valid-parenthesis-string/

Given a string containing only three types of characters: `'('`, `')'` and `'*'`, write a function to check whether this string is valid. We define the validity of a string by these rules:

1. Any left parenthesis `'('` must have a corresponding right parenthesis `')'`.
2. Any right parenthesis `')'` must have a corresponding left parenthesis `'('`.
3. Left parenthesis `'('` must go before the corresponding right parenthesis `')'`.
4. `'*'` could be treated as a single right parenthesis `')'` or a single left parenthesis `'('` or an empty string.
5. An empty string is also valid.


#### Example 1:
```
Input: "()"
Output: True
```

#### Example 2:
```
Input: "(*)"
Output: True
```

#### Example 3:
```
Input: "(*))"
Output: True
```

#### Note:
1. The string size will be in the range [1, 100].


<br>

### My Thought: 


### Code: 
```java
class Solution {
    public boolean checkValidString(String s) {
        
    }
}

```    


## Solution

https://buttercola.blogspot.com/2019/02/leetcode-678-valid-parenthesis-string.html

```java
class Solution {
    public boolean checkValidString(String s) {
        if (s == null || s.length() == 0) {
            return true;
        }
 
        int lo = 0;
        int hi = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
 
            if (c == '(') {
                lo++;
                hi++;
            } else if (c == ')') {
                if (lo > 0) {
                    lo--;
                }
                hi--;
            } else {
                if (lo > 0) {
                    lo--;
                }
                hi++;
            }
 
            if (hi < 0) {
                return false;
            }
        }
 
        return lo == 0;
    }
}
```

#### Logic: 

#### Notes: 


