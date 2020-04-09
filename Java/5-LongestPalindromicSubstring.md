# 5. Longest Palindromic Substring

https://leetcode.com/problems/longest-palindromic-substring/

Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

#### Example 1:
```
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
```

#### Example 2:
```
Input: "cbbd"
Output: "bb"
```

### My Thought: 
Go from the middle and go to left and right together. 


### Code: The logic is not really working 
```java
class Solution {
    public String longestPalindrome(String s) {
        if(s.length()<=1) return s; 

        int size = s.length(); 

        int left = 0; 
        int right = 0; 

        if(size%2==0) {
            right = size/2; 
            left = right - 1; 
        }
        else {
            left = size/2; 
            right = left + 1; 
        }

        int left = mid-1; 
        int right = mid+1; 

        while(left>=0 && right <=s.length()-1) {
            if( s.charAt(left) && s.charAt(right) ) 
                String str = s.substring(left, right); 
            
            left = left -1; 
            right = right + 1; 
        }

        return str; 
    }
}

```    


## Solution
Expand Around Center
```
In fact, we could solve it in O(n^2)O(n^2) time using only constant space.

We observe that a palindrome mirrors around its center. Therefore, a palindrome can be expanded from its center, and there are only 2n−1 such centers.

You might be asking why there are 2n - 1 but not n centers? The reason is the center of a palindrome can be in between two letters. Such palindromes have even number of letters (such as "abba") and its center are between the two 'b's.

```

https://www.youtube.com/watch?v=y2BD4MJqV20

```java
class Solution {
    public String longestPalindrome(String s) {
        if(s == null || s.length() < 1) return "";
        
        int start = 0, end = 0; 
        
        for(int i=0; i<s.length(); i++) {
            int len1 = expandAroundCenter(s, i, i); 
            int len2 = expandAroundCenter(s, i, i+1); //it could go right or left
            int len = Math.max(len1, len2); 
            
            if(len > end - start) {
                start = i-(len - 1)/2; 
                end = i+ len/2; 
            }
        }
        return s.substring(start, end+1); 
    }
    
    private int expandAroundCenter(String s, int left, int right) {
        int L = left, R = right; 
        while(L >= 0 && R < s.length() && s.charAt(L) == s.charAt(R)) {
            L--; 
            R++; 
        }
        return R-L-1; 
    }
}
```


#### Logic: 

#### Notes: 


