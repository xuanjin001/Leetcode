# 784. Letter Case Permutation

Given a string S, we can transform every letter individually to be lowercase or uppercase to create another string.  Return a list of all possible strings we could create.

#### Examples:
```
Input: S = "a1b2"
Output: ["a1b2", "a1B2", "A1b2", "A1B2"]
```
```
Input: S = "3z4"
Output: ["3z4", "3Z4"]
```
```
Input: S = "12345"
Output: ["12345"]
```

#### Note:
* S will be a string with length between 1 and 12.
* S will consist only of letters or digits.

<br>

### My Thought: 


### Code: 

https://techlarry.github.io/Leetcode/784.%20Letter%20Case%20Permutation/

```java
class Solution {
    public List<String> letterCasePermutation(String S) {
        List<String>  output = new ArrayList<String>(); 
        if(S == null) return output; 

        backtracking(output, 0, new StringBuilder(), S);
        return output;  
    }

    private void backtracking(List<String> output, int i, StringBuilder str , String S ) {
        //base case, stopping point 
        if(i == S.length()) {
            output.add(str.toString()); 
            return ; 
        }

        //decision point 
        //we have to check either it is a letter or an int 
        char c = S.charAt(i); 

        //if it is a letter, start one with upper case, and another one with lower case 
        if( !Character.isLetter(c) ) { // if it is not a letter 
            str.append(c); // if it is a number, do nothing and attach that char to the string 
            backtracking(output, i+1, str, S); 
            str.deleteCharAt(str.length() - 1); //maintaining the string at a certain length
        }
        else { // if it s a letter, we need to check upper case and lower case 
            // uppercase 
            str.append(Character.toUpperCase(c));
            backtracking(output, i+1, str,S);
            str.deleteCharAt(str.length() - 1); //maintaining the string at a certain length

            // lowercase
            str.append(Character.toLowerCase(c));
            backtracking(output, i+1, str,S);
            str.deleteCharAt(str.length() - 1); //maintaining the string at a certain length
        }

    }
}

```    


## Solution


#### Logic: 

#### Notes: 


