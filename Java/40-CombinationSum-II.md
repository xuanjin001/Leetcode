# 40. Combination Sum II

https://leetcode.com/problems/combination-sum-ii/

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sums to `target`.

Each number in `candidates` may only be used once in the combination.

#### Note:

All numbers (including target) will be positive integers.

The solution set must not contain duplicate combinations.

#### Example 1:
```
Input: candidates = [10,1,2,7,6,1,5], target = 8,
A solution set is:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
```

#### Example 2:
```
Input: candidates = [2,5,2,1,2], target = 5,
A solution set is:
[
  [1,2,2],
  [5]
]
```


<br>

### My Thought: 
Refer to #39


### Code: 
```java
class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<Integer> result = new ArrayList<Integer>(); 

        Arrays.sort(candidates);

        dfs() 




        return result; 
    }
}

```   

combination sum I 

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


## Solution


#### Logic: 

#### Notes: 


