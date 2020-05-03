# 383. Ransom Note

Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.
```
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
```

<br>

### My Thought: 


### Code: 
```java
class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        
        boolean flag = true; 
        int len_ransom = ransomNote.length(); 
        int len_mag = magazine.length(); 
        int len_size = 0; 

        if(magazine.length() == 0 && ransomNote.length() == 0)
            return true; 
        if(magazine.length() == 0 && ransomNote.length() != 0)
            return false; 

        if(len_ransom <= len_mag)
            len_size = len_ransom; 
        else 
            len_size = len_mag; 
        
        for(int i = 0; i < len_size; i++)
            if(ransomNote.charAt(i) == magazine.charAt(i) ) 
                flag = true; 
            else 
                flag = false; 
        
        return flag; 
    }
}

public boolean canConstruct(String ransomNote, String magazine) {
        int[] arr = new int[26];
        for (int i = 0; i < magazine.length(); i++) {
            arr[magazine.charAt(i) - 'a'] ++;
        }
        for (int i = 0; i < ransomNote.length(); i++) {
           
            if(--arr[ransomNote.charAt(i)-'a'] < 0) {
                return false;
            }
        }
        return true;
    }





```    


## Solution
https://github.com/Cee/Leetcode/blob/master/383%20-%20Ransom%20Note.java

https://codedestine.com/ransom-note-string-problem/

```java
class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if (ransomNote == null) { return true; }
        if (magazine == null) { return false; }
        if (magazine.length() < ransomNote.length()) { return false; }
        int[] count = new int[26];
        for (char c: magazine.toCharArray()) {
            count[c - 'a'] += 1;
        }
        for (char c: ransomNote.toCharArray()) {
            if (count[c - 'a'] == 0) { return false; }
            count[c - 'a'] -= 1;
        }
        return true;
    }
}
```

#### Logic: 

#### Notes: 


