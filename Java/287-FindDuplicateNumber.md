# 287. Find the Duplicate Number

https://leetcode.com/problems/find-the-duplicate-number/


Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

```
Example 1:
Input: [1,3,4,2,2]
Output: 2
```

```
Example 2:
Input: [3,1,3,4,2]
Output: 3
```

Note:
1. You must not modify the array (assume the array is read only).
2. You must use only constant, O(1) extra space.
3. Your runtime complexity should be less than O(n^2).
4. There is only one duplicate number in the array, but it could be repeated more than once.


### My Thoughts: 
have a hashmap, key would be the element, have the value would be the count; output with the duplicates

### My Solution: (WORKED!!!)
```Java
class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer> (); 
        int result = 0; 


        for(Integer num:nums){
            if(!map.containsKey(num)) {
                map.put(num,1); 
            }
            else if(map.containsKey(num)) {
                int count = map.get(num); 
                count++; 
                map.put(num, count);
            }
        }

        for(int i=0; i<nums.length; i++) {
            if(map.get(nums[i])>1) 
                result= nums[i]; 
        }

        return result; 
    }
}
```


## Solution
https://tenderleo.gitbooks.io/leetcode-solutions-/GoogleHard/287.html
