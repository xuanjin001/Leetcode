[strStr](https://leetcode.com/problems/implement-strstr/)

**Example 1:**
```
Input: haystack = "hello", needle = "ll"
Output: 2
```
**Example 2:**
```
Input: haystack = "aaaaa", needle = "bba"
Output: -1
```
**Example 3:**
```
Input: haystack = "", needle = ""
Output: 0
```
**Logic:**
```
get the length of the needle word
scan the string to get the substring that's fit for the needle
if found, return index 
not found, return -1

check needle's length and haystack's length
if the needle's length > haystack, then there is no way to match

loop through each char and check if it is going to match the letter or not 

```

```python
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(needle) > len(haystack):
            return -1
        if len(needle) == 0:
            return 0
        for i in range(len(haystack) - len(needle) + 1):
            for j in range(len(needle)):
                if haystack[i + j] != needle[j]:
                    break
            else:
                return i
        return -1 

```

```java
class Solution {
    public int strStr(String haystack, String needle) {
        if (needle=="") return 0;
        int i=0;
        int j=0;
        int k=0;
        while(i<haystack.length() && haystack.length()-i>=needle.length()){
            k=i;
            while(j<needle.length()){
                if(haystack.charAt(k)!=needle.charAt(j)){
                    j=0;
                    break;
                }
                j++;
                k++;
            }
            if(j==needle.length()) return i;
            i++;
        }
        return -1;
    }
}
```
Notes: 

- i iterates each position in the haystack
- j iterates each position in the needle
- when the haystack matches the needle in one position, match the rest. (At first I used indexOf() in java like many others here and it was amazing to see one line of code works. )

[subsets](https://leetcode.com/problems/subsets/)

```python
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        def backtrack(first = 0, curr = []):
            # if the combination is done
            if len(curr) == k:  
                output.append(curr[:])
            for i in range(first, n):
                # add nums[i] into the current combination
                curr.append(nums[i])
                # use next integers to complete the combination
                backtrack(i + 1, curr)
                # backtrack
                curr.pop()
        
        output = []
        n = len(nums)
        for k in range(n + 1):
            backtrack()
        return output

```

```java
class Solution {
  List<List<Integer>> output = new ArrayList();
  int n, k;

  public void backtrack(int first, ArrayList<Integer> curr, int[] nums) {
    // if the combination is done
    if (curr.size() == k)
      output.add(new ArrayList(curr));

    for (int i = first; i < n; ++i) {
      // add i into the current combination
      curr.add(nums[i]);
      // use next integers to complete the combination
      backtrack(i + 1, curr, nums);
      // backtrack
      curr.remove(curr.size() - 1);
    }
  }

  public List<List<Integer>> subsets(int[] nums) {
    n = nums.length;
    for (k = 0; k < n + 1; ++k) {
      backtrack(0, new ArrayList<Integer>(), nums);
    }
    return output;
  }
}
```
