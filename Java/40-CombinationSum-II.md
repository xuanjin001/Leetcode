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
        List<List<Integer>> results = new ArrayList<>(); 

        // check on the input, if it is 
    }


}

```   



## Solution
```java
class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> results = new ArrayList<>();
        
        if (candidates == null || candidates.length == 0) {
            return results;
        }
        
        Arrays.sort(candidates);
        
        List<Integer> combination = new ArrayList<>();
        toFindCombinationsToTarget(candidates, results, combination, 0, target);
        
        return results;
    }
    
    private void toFindCombinationsToTarget(int[] candidates, List<List<Integer>> results, List<Integer> combination, int startIndex, int target) {
        if (target == 0) {
            results.add(new ArrayList<>(combination));
            return;
        }
        
        for (int i = startIndex; i < candidates.length; i++) {
            if (i != startIndex && candidates[i] == candidates[i - 1]) {
                continue;
            }
            
            if (candidates[i] > target) {
                break;
            }         
            
            combination.add(candidates[i]);
            toFindCombinationsToTarget(candidates, results, combination, i + 1, target - candidates[i]);
            combination.remove(combination.size() - 1);
        }
        
    }
}
```

#### Logic: 

#### Notes: 


