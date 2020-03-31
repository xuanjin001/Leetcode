# 34. Find First and Last Position of Element in Sorted Array

https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

Given an array of integers `nums` sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

#### Example 1:

`Input: nums = [5,7,7,8,8,10], target = 8`

`Output: [3,4]`


#### Example 2:
`Input: nums = [5,7,7,8,8,10], target = 6`

`Output: [-1,-1]`

<br>


### My Thought: 
Loop through `nums` and check with target one by one
    If matched with target
        return the position
    else go to the next one
    If reach the end of the nums, still no match
        return [-1, -1]

### Code: 
```java
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] output = new int[2]; 
        int[] result = new int[0];
        boolean matched = false; 
        
        
        int j=0; 
        for(int i=0; i<nums.length; i++) {
            if(nums[i] == target) {
                matched = true; 
                result = Arrays.copyOf(result, result.length +1);
                result[j] = i; 
                j++; 
            }
        }

        if(matched) {
            if(result.length > 1) {
                output[0] = result[0]; 
                output[1] = result[result.length-1]; 
            }
            else {
                output[0] = result[0]; 
                output[1] = result[0]; 
            }
        }
        
        else if(!matched) {
            //output = Arrays.copyOf(output, output.length+2); 
            output[0]= -1; 
            output[1]= -1; 
        }

        return output; 
        
    }

}
```    

### Notes
My solution works, it will give you the end results, but it is not O(logN), it is N. This can be count as bruteforce 

Should have been using binary search 

## Solution

https://www.cnblogs.com/Dylan-Java-NYC/p/4881418.html



