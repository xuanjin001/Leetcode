# 698. Partition to K Equal Sum Subsets

https://leetcode.com/problems/partition-to-k-equal-sum-subsets/

Given an array of integers nums and a positive integer k, find whether it's possible to divide this array into k non-empty subsets whose sums are all equal.


#### Example 1:
```
Input: nums = [4, 3, 2, 3, 5, 2, 1], k = 4
Output: True
Explanation: It's possible to divide it into 4 subsets (5), (1, 4), (2,3), (2,3) with equal sums.
```

#### Note:

* 1 <= k <= len(nums) <= 16.
* 0 < nums[i] < 10000.

<br>

### My Thought: 


### Code: 
```java
class Solution {
    public boolean canPartitionKSubsets(int[] nums, int k) {
        
    }
}

```    


## Solution
https://www.youtube.com/watch?v=8XEcEYsG6Ck

```java
class Solution {
    public boolean canPartitionKSubsets(int[] nums, int k) {
        int sum = sum(nums); //add all numbers together 

        if(sum % k != 0){// the array cannot be equally divided into k partitions 
            return false; 
        }

        int target = sum / k; //finding what the target sum for each subarray should be 

        Arrays.sort(nums); 

        int beginIndex = nums.length - 1; //from the last index goingn back， which also means we are going from the largest 

        if(nums[beginIndex] > target) {
            return false; //if the num in the array is bigger than the target sum for each subarray, then there is no way this array can be divided into equal portion 
        }

        // when the begin index is bigger than 0, which means we still have some numbers left in the array 
        // check the subarray can be sum up to the target
        // decision point 
        while(beginIndex >= 0 && nums[beginIndex] == target) {
            beginIndex--; 
            k--; 
        }

        return partition(new int[k], nums, beginIndex, subSum); //use a function to check on the subarray
    }

    private boolean partition(int[] subsets, int[] nums, int index, int target) {
        if(index<0) {
            return true; // we are already done 
        }
        
        int selected = nums[index]; //pick the element out 

        // we are trying to put the elements into the the array and see if this will work 
        for(int i=0; i<subsets.length; i++) {
            //the subset we had plus the one we selected out, if it is smaller than the target, then there is a chance that it can be add up to the target 
            if(subsets[i] + selected <= target) { 
                subsets[i] += selected; 
                if(partition(subsets, nums, index-1, target)) {
                    return true; 
                }
                
                subsets[i] -= selected; // backtrack to the previous step 
            }
        }
        
        return false; 
    }

    private int sum(int[] nums) {
        int res = 0; 
        for(int num:nums){
            res += n; 
        }
        return res; 
    }
}

``` 



#### Logic: 

#### Notes: 



