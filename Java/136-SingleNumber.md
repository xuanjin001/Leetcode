# 136. Single Number

https://leetcode.com/problems/single-number/

Given a **non-empty** array of integers, every element appears twice except for one. Find that single one.

#### Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

#### Example 1:
```
Input: [2,2,1]

Output: 1
```
#### Example 2:
```
Input: [4,1,2,1,2]

Output: 4
```
### My Thought: 


### Code: WORKED!! --> could also have solved with HashSet, maybe faster 
```java
class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>(); 
        int result = 0; 

        for(int num : nums){
            if(map.containsKey(num)) {
                int count = map.get(num); 
                count++; 
                map.put(num, count); 
            }
            else {
                map.put(num, 1); 
            }
        }

        for(int i=0; i<nums.length; i++) {
            if(map.get(nums[i]) == 1) 
                result = nums[i]; 
        }

        return result; 
    }
}

```    


## Solution




