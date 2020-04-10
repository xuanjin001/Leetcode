# 394. Decode String

https://leetcode.com/problems/decode-string/

Given an encoded string, return its decoded string.

The encoding rule is: `k[encoded_string]`, where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; No extra white spaces, square brackets are well-formed, etc.

Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there won't be input like `3a` or `2[4]`.

#### Examples:
```
s = "3[a]2[bc]", return "aaabcbc".

s = "3[a2[c]]", return "accaccacc".

s = "2[abc]3[cd]ef", return "abcabccdcdcdef".
```

<br>

### My Thought: 
Use a stack as the solution. 

Save all chars in the stack
then remove and repeat accordingly 

### Code: 
```java
class Solution {
    public String decodeString(String s) {
        String str = ""; 
        Stack<Character> stack_s = new Stack<Character>(); 

        for(int i=0; i<s.length(); i++) {
            if(s.CharAt(i) != '[' && s.CharAt(i) != ']')
                stack_s.push(s.CharAt(i)); 
        }

        Char tmp = ''; 
        int count = 0; 

        while(!stack_s.isEmpty()) {
            Char c = stack_s.pop(); 
            if( !Character.isDigit(c) ) {
                tmp = c; 
            }
            else {
                count = Integer.parseInt(c); 
                for(int i=0; i<count; i++) {
                    str = str + tmp;   
                }
                

            }
        }
    }

    private String 
}

```    


## Solution

https://www.youtube.com/watch?v=0iQqj5egK9k

```java
class Solution {
    public String decodeString(String s) {
        Stack<Integer> counts = new Stack(); 
        Stack<String> result = new Stack(); 

        String cur_str = ""; 
        int index = 0; 

        while( index<s.length() ) {
            if(Character.isDigit(s.charAt(index))) { // if it is a number, it is count 
                int count = 0; 
                String nstr = ""; 
                while(Character.isDigit(s.charAt(index))) {
                    nstr = nstr + s.charAt(index); 
                    index++; 
                    
                    //count = 10*count + (s.charAt(index) - '0'); 
                    //index +=1; 
                    
                }
                int num = Integer.parseInt(String.valueOf(nstr));
                counts.push(num); 
            
                //counts.push(count); 
            } else if(s.charAt(index) == '[') {
                result.push(cur_str); 
                cur_str = ""; //reset
                index++; 
            } else if(s.charAt(index) == ']') {
                StringBuilder temp = new StringBuilder(result.pop()); 
                int count = counts.pop(); //number of times you want to repeat 
                for(int i=0; i<count; i++) {
                    temp.append(cur_str); //add onto the current string 
                }
                cur_str = temp.toString(); 
                index++; 
            } else { //then it is a character 
                cur_str += s.charAt(index); 
                index++; 
            }

        }

        return cur_str;

        
    }

}

``` 

#### Logic: 

#### Notes: 


