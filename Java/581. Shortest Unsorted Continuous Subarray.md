# 581. Shortest Unsorted Continuous Subarray

https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

Given an integer array, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.

You need to find the shortest such subarray and output its length.

```
Example 1:
Input: [2, 6, 4, 8, 10, 9, 15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
Note:
Then length of the input array is in range [1, 10,000].
The input array may contain duplicates, so ascending order here means <=.
```

### Code: 
```Java
class Solution {
	public int findUnsortedSubarray(int[] nums) {
		int[] tmp = nums.clone(); //--> clone
		Arrays.sort(tmp);
		int n = nums.length;
		int low = 0;
		int high = n - 1;
		while (low < n && nums[low] == tmp[low]) {
			low++;
		}
		while (high >= low && nums[high] == tmp[high]) {
			high--;
		}
		return high - low + 1;
	}
}
```


## Solution
https://blog.csdn.net/mine_song/article/details/72771879


