# 78. Subsets

https://leetcode.com/problems/subsets/

Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

```
Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
```

### Code: 
```java
class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new ArrayList<>(); 
        
        if(nums == null || nums.length == 0) return res; 

        List<Integer> cur = new ArrayList<>(); 

        Arrays.sort(nums); 
        dfs(nums, res, 0, cur); 

        return res; 
    }

    private void dfs(int[] nums, List<List<Integer>> res, int start, List<Integer> cur) {
        res.add(new ArrayList<Integer>(cur)); 
        for(int i = start; i < nums.length; i++){
            cur.add(nums[i]);

            dfs(nums, res, i+1, cur); 
            cur.remove(cur.size()-1); 
        }
    }
} 
```


## Solution
https://tenderleo.gitbooks.io/leetcode-solutions-/GoogleMedium/78.html


