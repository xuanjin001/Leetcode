# 494. Target Sum

https://leetcode.com/problems/target-sum/

You are given a list of non-negative integers, a1, a2, ..., an, and a target, S. Now you have 2 symbols + and -. For each integer, you should choose one from + and - as its new symbol.

Find out how many ways to assign symbols to make sum of integers equal to target S.

#### Example 1:
```
Input: nums is [1, 1, 1, 1, 1], S is 3. 
Output: 5

Explanation: 

-1+1+1+1+1 = 3
+1-1+1+1+1 = 3
+1+1-1+1+1 = 3
+1+1+1-1+1 = 3
+1+1+1+1-1 = 3

There are 5 ways to assign symbols to make the sum of nums be target 3.
```

#### Note:

1. The length of the given array is positive and will not exceed 20.
2. The sum of elements in the given array will not exceed 1000.
3. Your output answer is guaranteed to be fitted in a 32-bit integer.



### My Thought: 
sort the array first 

Keep adding each integer until it is bigger than the sum, then start to substract

You need to find all combinations in this case
Therefore, you can find the all the combinations that can give you the same answer

### Code: 
```java
class Solution {
    public int findTargetSumWays(int[] nums, int S) {
        Array.sort(nums); 
        int sum = 0; 
        
        for(num : nums) {
            if(sum<S) {
                sum = sum + num; 
            }
            
        }
    }
}

```    


## Solution


#### Logic: 

#### Notes: 


