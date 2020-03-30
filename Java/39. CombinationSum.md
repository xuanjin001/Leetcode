# 39. Combination Sum

https://leetcode.com/problems/combination-sum/

Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.

```
Example 1:

Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]
```

```
Example 2:

Input: candidates = [2,3,5], target = 8,
A solution set is:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]
```
### My Thoughts: 
If target % element == 0, 
    push the element into []
else 
    check if the remain exist in [], 
        if it does exist push into the array 

### My shot at this: (Not working....)
```java
class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new List<List<Integer>>(); 
        List<Integer> subarray = new List<Integer>(); 

        for(Integer candidate : candidates) {
            if(target % candidate == 0) {
                if( target == candidate ) subarray.add(candidate); 
                else {
                    int count = target/candidate; 
                    for(int i=0; i<=count; i++){
                        subarray.add(candidate); 
                    }
                }
            }
            else {
                int remain = target % candidate; 
                if(candidates.contains(remain)) {
                    subarray.add(remain); 
                    int count = (target-remain)/candidate; 
                    for(int i=0; i<=count; i++){
                        subarray.add(candidate); 
                    }
                }
            }

            result.add(subarray); 
        }
        return result; 
    }
}
```

### Standard Answer: 
```java
public class Solution {
    List<List<Integer>> res = new ArrayList<>(); 
    
    public List<List<Integer>> combinationSum(int[] num, int target) {
        List<Integer> list = new ArrayList<>(); 
        Arrays.sort(num); 
        dfs(num, 0, list, 0, target); 

        return res; 
    }

    private void dfs(int[] num, int start, List<Integer> result, int sum, int target) {
        if(sum == target){
            res.add(new ArrayList<Integer>(result));
            return; 
        }

        for(int i=start; i<num.length; i++){
            if(i>start && num[i] == num[i-1])
                continue; // if the set doesn't contains duplicates, then this line won't be needed. 
            if(num[i] + sum > target) break; 

            result.add(num[i]); 
            dfs(num, i, result, sum+num[i], target); 
            result.remove(result.size()-1); 
        }
    }
}
```


### Reference Link: 
https://www.cnblogs.com/grandyang/p/4419259.html


## Solution
https://tenderleo.gitbooks.io/leetcode-solutions-/GoogleMedium/39.html

https://github.com/Cee/Leetcode/blob/master/39%20-%20Combination%20Sum.java

## Similar
* Path Sum II
* Subsets II
* Permutations
* Permutations II
* Combinations 