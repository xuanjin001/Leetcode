# 424. Longest Repeating Character Replacement

https://leetcode.com/problems/longest-repeating-character-replacement/

Given a string `s` that consists of only uppercase English letters, you can perform at most `k` operations on that string.

In one operation, you can choose any character of the string and change it to any other uppercase English character.

Find the length of the longest sub-string containing all repeating letters you can get after performing the above operations.

#### Note:
Both the string's length and k will not exceed 104.

#### Example 1:
```
Input:
s = "ABAB", k = 2

Output:
4

Explanation:
Replace the two 'A's with two 'B's or vice versa.
```

#### Example 2:
```
Input:
s = "AABABBA", k = 1

Output:
4

Explanation:
Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
```

<br>

### My Thought: 
I am trying to copy the logic from 438,


### Code:  not working 
```java
class Solution {
    public int characterReplacement(String s, int k) {
        if(s.length == 0) return 0; 
        if(s.length == 1) return 1;


        int[] char_count = new int[26]; //there are 26 letters
        for(char c: s.toCharArray()) {
            char_count[c-'a']++; //this will get us the asci values of that character in order to get to the correct index value 
            //++ means that you increament that count every time you see this character 

        }

        int start = 0; 
        int end = 0; 
        int count = k; 
        int len = 0; 
        //int len = s.length(); 

        while( end < s.length() ) {
            
            if(char_count[s.charAt(end++)-'a']-- >= 1) count--; 
            
            if(count == 0) result.add(start); 

            if( (end - start) == p.length() && char_count[s.charAt(start++)-'a']++ >= 0) 
                count++; 

        }

        return 
    }

}

```

```java
class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> result = new ArrayList<Integer>(); 

        // always check the empty string
        // corner case
        if(s.length() == 0|| s==null) return result; 

        // create an array of letters
        int[] char_count = new int[26]; //there are 26 letters
        for(char c: p.toCharArray()) {
            char_count[c-'a']++; //this will get us the asci values of that character in order to get to the correct index value 
            //++ means that you increament that count every time you see this character 

        }

        int start = 0; 
        int end = 0; 
        int count = p.length(); 

        // sliding window problem 

        // when the end index is not exceeding the boundary 

        while( end < s.length() ) {
            // keep movig the right pointer to the right
            // decrease the count when there is a matching 
            // also, need to subtract the 'a' in order to get the correct index 
            if(char_count[s.charAt(end++)-'a']-- >= 1) count--; 
            

            if(count == 0) result.add(start); 

            // once we found the anagram, we are moving on with the left boundary
            if( (end - start) == p.length() && char_count[s.charAt(start++)-'a']++ >= 0) count++; 

            

        }

        return result; 


    }
}
```


## Solution

https://www.youtube.com/watch?v=00FmUN1pkGE

```java
class Solution {
    public int characterReplacement(String s, int k) {
        int n = s.length(); 
        int[] char_count = new int[26]; //count all 26characters count at that character

        // sliding window will always have start and end 
        int start = 0; 
        int sub_len = 0; 
        int max_count = 0; // counting on the repeating character that we are looking for 

        for(int end = 0; end<n; end++) {
            char_count[s.charAt(end) - 'A']++; // you have to minus the 'A', so that it is making sure that you are putting the character at the right spot 
            int end_char_count = char_count[s.charAt(end) - 'A']; 
            max_count = Math.max(max_count, end_char_count ); 

            //making sure that all pointers are within the correct boundary
            // this means that we are out of operations, means that we cannot change characters within that string any more 
            while(end - start - max_count +1 > k) {
                //change the beginning of the window 
                //pop character from the front
                //count decreases 
                char_count[s.charAt(start) - 'A']--; 
                start++; //move the start to the right 
            }

            sub_len = Math.max(sub_len, end - start +1); 
        }

        return sub_len; 
    }
}
```

#### Logic: 

#### Notes: 


