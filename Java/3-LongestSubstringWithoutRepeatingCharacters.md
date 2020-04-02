# 3. Longest Substring Without Repeating Characters

https://leetcode.com/problems/longest-substring-without-repeating-characters/

Given a string, find the length of the longest substring without repeating characters.

#### Example 1:
```
Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
```

#### Example 2:
```
Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

#### Example 3:
```
Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
```


### My Thought: 


### Code: My shot doesn't really work, the logic is kinda similar to sliding window 
```java
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int count = -1; 
        int i =0; 
        int n=s.length()-1; 

        while(s.length()!=1) {
            int lastLength = subStr(s); 

            if(lastLength > count)
                count = lastLength; 
            
            if(s.length()>1)
                s = s.substring(lastLength, n); 
        }

        return count; 
    }

    public int subStr(String s) {
        int count=0; 
        int i=0; 
        while( (i+1)<s.length() && s.charAt(i)!=s.charAt(i+1) ) {
            
            if(s.substring(0, i).contains(Character.toString(s.charAt(i))) )
                break; 
            else {
                i++; 
                count++; 
                continue; 
            }
            
            
        }
        
        return count; 
    }
    
}

```    


## Solution
```java
public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        Set<Character> set = new HashSet<>();
        int ans = 0, i = 0, j = 0;
        while (i < n && j < n) {
            // try to extend the range [i, j]
            if (!set.contains(s.charAt(j))){
                set.add(s.charAt(j++));
                ans = Math.max(ans, j - i);
            }
            else {
                set.remove(s.charAt(i++));
            }
        }
        return ans;
    }
}
```

##### HashMap: 

```java
public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length(), ans = 0;
        Map<Character, Integer> map = new HashMap<>(); // current index of character
        // try to extend the range [i, j]
        for (int j = 0, i = 0; j < n; j++) {
            if (map.containsKey(s.charAt(j))) {
                i = Math.max(map.get(s.charAt(j)), i);
            }
            ans = Math.max(ans, j - i + 1);
            map.put(s.charAt(j), j + 1);
        }
        return ans;
    }
}
```



