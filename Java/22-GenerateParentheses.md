# 22. Generate Parentheses

https://leetcode.com/problems/generate-parentheses/

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:
```
[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]
```

<br>

### My Thought: 


### Code: 
```java
class Solution {
    public List<String> generateParenthesis(int n) {
        
    }

    public void backtracking 
}

```    


## Solution

https://www.youtube.com/watch?v=qBbZ3tS0McI

```java
 class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> output_arr = new ArrayList<String>();
        //always set up like this, call the helper function, and input contains the possible output and beginning count 
        backtracking(output_arr, "", 0,0, n); //when starting, 0 opening (, and 0 closing ) 
        return output_arr;  
    }

    // backtracking would call all the possible decisions

    public void backtracking(List<String> output, String cur_string, int open, int close, int max) {
      //base case for backtracking 
      //add onto the output array 
      if(cur_string.length() == max*2) {//this means that we found all possible pairs 
        output.add(cur_string); 
        return ; 
      }

      //backtracking always involve decisions 
      if(open < max) backtracking(output, cur_string + "(", open+1, close, max ); 

      //we are missing closing )
      if(close < open) backtracking(output, cur_string +")", open, close+1, max); 

      

    }
}

```  

#### Breakdown
```java
// problem test case n=2
current = ""; 
[]; 

n=2; 
max=2; 

open=0; 
close=0; 

if(open < max) //if(0<2>) recursive call

  // inside recursibe call below
  current = "("; 
  []; 

  n=2; 
  max =2; 

  open = 1; 
  close = 0; 

  if(open < max) // if(1<2) recursive call 

    //inside recursive call below 
    current = "(("; 
    []; 

    n = 2; 
    max = 2; 

    open = 2; 
    close = 0; 

    if(open < max) // if (2<2) false 
  
  if(close < open) // if(0<2) recursive call 
    //inside recursive call below 
    current = "()"; 
    []; 

    n = 2; 
    max = 2; 

    open = 1; 
    close = 1; 

    if(open < max) //if (1<2) recursive call 
      //inside recursive call below 
      current = "()"; 
      []; 

      n=2; 
      max = 2 ; 

      open = 1; 
      close = 1; 

      if(open<max) //if(1<2) recursive call 
        //inside recursive call below 
        current = "()("; 
        []; 

        n=2; 
        max = 2; 

        open=2; 
        close = 1; 

        if(open<max) // if(2<2) false

        if(close < open) //if(1<2)  recursive call 
          //inside recursive call below 
          current = "()()" 
          []

          n=2; 
          max=2; 
          open=2; 
          close = 2; 

if(close < open) //false 


```


#### Logic: 

#### Notes: 


