# 438. Find All Anagrams in a String

https://leetcode.com/problems/find-all-anagrams-in-a-string/

Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

The order of output does not matter.

#### Example 1:
```
Input:
s: "cbaebabacd" p: "abc"

Output:
[0, 6]
```
#### Explanation:

> The substring with start index = 0 is "cba", which is an anagram of "abc".

> The substring with start index = 6 is "bac", which is an anagram of "abc".


#### Example 2:
```
Input:
s: "abab" p: "ab"

Output:
[0, 1, 2]
```
#### Explanation:

> The substring with start index = 0 is "ab", which is an anagram of "ab".

> The substring with start index = 1 is "ba", which is an anagram of "ab".

> The substring with start index = 2 is "ab", which is an anagram of "ab".

### My Thought: 
Save the p string in a hashset

Check each char in the s string if it exist in the p dict or not
if it exist: 
    check the next two char to see if they exist in the p, if it is 
        return the cur index 
    if it doesn't exist 
        move on 


### Code: Not working the following
```java
class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        HashSet<Character> pSet = new HashSet<Character>(); 
        List<Integer> result = new ArrayList<Integer>(); 
        int len = p.length(); 
        boolean flag = false; 
        
        for(char c: p.toCharArray()) {
            pSet.add(c); 
        }

        for(int i = 0, n=s.length(); i<n; i++) {
            char c = s.charAt(i); 
            
            if(i+len < n) {
                String str = s.substring(i, i+len); 
                if( check(str, pSet) ) 
                    result.add(i); 
            }
            
            
        }

        return result; 
    }
    
    private boolean check(String s, HashSet<Character> pSet) {
        boolean flag = false; 
        for(char c:s.toCharArray()) {
            if(pSet.contains(c)) 
                flag = true; 
            else {
                flag = false; 
                break; 
            }
        }
        return flag; 
    }
    
}

```    


## Solution

https://www.youtube.com/watch?v=fvEw13A5O1o

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

https://starllap.space/2017/04/24/LeetCode-438-Find-All-Anagrams-in-a-String/

```java
class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> list = new ArrayList<>();

        if(s == null || p == null || s.length() < p.length()) 
            return list;
        
        int[] chars = new int[256];

        for(Character c:p.toCharArray()) {
            chars[c] ++;
        }
        
        int start = 0; 
        int end = 0; 
        int count = p.length();
        
        while(end < s.length()) {
            //move right everytime, if the character exists in p's hash, decrease the count
            //current hash value >= 1 means the character is existing in p
            if (chars[s.charAt(end)] >= 1) {
                count--;
            }
            chars[s.charAt(end)]--;
            end++;
            //when the count is down to 0, means we found the right anagram
            //then add window's left to result list
            if (count == 0) {
                list.add(start);
            }
            //if we find the window's size equals to p, then we have to move left (narrow the window) to find the new match window
            //++ to reset the hash because we kicked out the left
            //only increase the count if the character is in p
            //the count >= 0 indicate it was original in the hash, cuz it won't go below 0
            if (end - start== p.length() ) {
                if (chars[s.charAt(start)] >= 0) {
                    count++;
                }
                chars[s.charAt(start)]++;
                start++;
            }
        }
        return list;
    }

}
```

#### Logic: 

#### Notes: 


