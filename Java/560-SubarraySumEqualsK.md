# 560. Subarray Sum Equals K

https://leetcode.com/problems/subarray-sum-equals-k/

Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

#### Example 1:

`Input:nums = [1,1,1], k = 2`

`Output: 2`

#### Note:
1. The length of the array is in range [1, 20,000].
2. The range of numbers in the array is [-1000, 1000] and the range of the integer k is [-1e7, 1e7].

<br>

### My Thought: 


### Code: 
```java
class Solution {
    public int subarraySum(int[] nums, int k) {
        int count =0, sum =0; //initialize
        HashMap<Integer, Integer> map = new HashMap<>(); 
        map.put(0,1); //initialize the map

        /*
        loop through the nums array
        put sum as the key, remaining as the value

        */
        for(int i=0; i<nums.length; i++) {
            sum = sum + nums[i]; 

            // if the 
            if(map.containsKey(sum-k)) count = count + map.get(sum-k); 

            map.put(sum, map.getOrDefault(sum, 0) +1); 
        }

        return count; 

    }
}

```    


## Solution

https://www.cnblogs.com/grandyang/p/6810361.html


https://blog.csdn.net/haoxiaoxiaoyu/article/details/76341699

https://www.youtube.com/watch?v=AmlVSNBHzJg

