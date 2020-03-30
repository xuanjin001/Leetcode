# 283. Move Zeroes

https://leetcode.com/problems/move-zeroes/

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

```
Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
```

### Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.


### My Thoughts: 
check each number slot, if it is equal to 0, move the next number to the current slot
and make the next number to be 0

(The above method has a problem, it will be in an infinity loop) 

### Code: 
```Java
class Solution {
    public void moveZeroes(int[] nums) {
        if(nums!=null){
            int length = nums.length; 
            for(int i=0, j=0; i<length; i++){
                if(nums[i]!=0){
                    if(i!=j){
                        nums[j]=nums[i]; 
                        nums[i]=0; 
                    }
                    j++; 
                }
            }
        }
    }
}
```


## Solution
https://blog.csdn.net/u012975705/article/details/50493772

