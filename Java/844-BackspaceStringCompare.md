# 844. Backspace String Compare

https://leetcode.com/problems/backspace-string-compare/

Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

#### Example 1:
```
Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
```

#### Example 2:
```
Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
```

#### Example 3:
```
Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
```

#### Example 4:
```
Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
```

#### Note:

1. 1 <= S.length <= 200
2. 1 <= T.length <= 200
3. S and T only contain lowercase letters and '#' characters.

#### Follow up:

Can you solve it in O(N) time and O(1) space?


<br>

### My Thought: 
sliding windown problem 



### Code: 
```java
class Solution {
    public boolean backspaceCompare(String S, String T) {
        String str_s = ""; 
        String str_t = ""; 

        int start = 0; 

        for(int end=0; end<S.length(); end++) {
            if(S.charAt(start) == "#")
                start++; 
            str_s = S.substring(start,end); 
        }

        start = 0; 

        for(int end=0; end<S.length(); end++) {
            if(T.charAt(start) == "#")
                start++; 
            str_t = T.substring(start,end); 
        }

        if(str_s == str_t) return true; 

        else return false; 


    }
}

```    


## Solution
Iterate through the string in reverse. If we see a backspace character, the next non-backspace character is skipped. If a character isn't skipped, it is part of the final answer.

See the comments in the code for more details.

```java
class Solution {
    public boolean backspaceCompare(String S, String T) {
        int i = S.length() - 1, j = T.length() - 1;
        int skipS = 0, skipT = 0;

        while (i >= 0 || j >= 0) { // While there may be chars in build(S) or build (T)
            while (i >= 0) { // Find position of next possible char in build(S)
                if (S.charAt(i) == '#') 
                {skipS++; i--;}
                else if (skipS > 0) 
                {skipS--; i--;}
                else break;
            }
            while (j >= 0) { // Find position of next possible char in build(T)
                if (T.charAt(j) == '#') {skipT++; j--;}
                else if (skipT > 0) {skipT--; j--;}
                else break;
            }
            // If two actual characters are different
            if (i >= 0 && j >= 0 && S.charAt(i) != T.charAt(j))
                return false;
            // If expecting to compare char vs nothing
            if ((i >= 0) != (j >= 0))
                return false;
            i--; j--;
        }
        return true;
    }
}
```

https://www.youtube.com/watch?v=vgog1EuEJYQ
reverse checking 

```java
class Solution {
    public boolean backspaceCompare(String S, String T) {
        int S_pointer = S.length()-1; 
        int T_pointer = T.length()-1; 

        int S_skips = 0; 
        int T_skips = 0;

        while(S_pointer >= 0 || T_pointer >= 0) {

            while(S_pointer >= 0) {
                if(S.charAt(S_pointer) == '#' ) {
                    S_skips++;
                    S_pointer--;  
                } 
                else if(S_skips > 0) {//if we see an actual letter, we need to do the skip
                    S_pointer--; 
                    S_skips--; 
                }
                else 
                    break; 

            }

            while(T_pointer >= 0) {
                if(T.charAt(T_pointer) == '#' ) {
                    T_skips++;
                    T_pointer--;  
                } 
                else if(T_skips > 0) {//if we see an actual letter, we need to do the skip
                    T_pointer--; 
                    T_skips--; 
                }
                else 
                    break; 

            }

            if(S_pointer >= 0 && T_pointer >= 0 && T.charAt(T_pointer) != S.charAt(S_pointer)) 
                return false; 
            
            if((S_pointer >= 0) != (T_pointer >= 0) ) { // as long as both pointers are bigger than 0 and not equal 
                return false; 
            }

            S_pointer--; 
            T_pointer--; 
            
                
        }
        return true; 

    }
}
```

#### Logic: 


#### Notes: 


