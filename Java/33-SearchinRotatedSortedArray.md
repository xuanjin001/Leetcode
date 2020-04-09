# 33. Search in Rotated Sorted Array

https://leetcode.com/problems/search-in-rotated-sorted-array/

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., `[0,1,2,4,5,6,7]` might become `[4,5,6,7,0,1,2]`).

You are given a target value to search. If found in the array return its index, otherwise return `-1`.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

#### Example 1:
```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```
#### Example 2:
```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

<br>

### My Thought: 
This is definitely binary search. 
But I don't know the syntax.... 



### Code: 
```java
class Solution {
    public int search(int[] nums, int target) {
        
    }
}

```    


## Solution
https://www.youtube.com/watch?v=QdVrY3stDD4

https://cheonhyangzhang.gitbooks.io/leetcode-solutions/content/33_leetcode_java_search_in_rotated_sorted_array__h.html

```java
class Solution {
    public int search(int[] nums, int target) {
        // initialize 
        int start = 0, end = nums.length-1; 

        while(start<=end) {
            //middle point
            int mid = (start+end)/2; 
            
            //check if the mid one is already the target
            //if it is, then we are done
            if(nums[mid]==target) {
                return mid; 
            }

            //pick a side
            //depending on if the current number is bigger or smaller
            //left side 
            if(nums[start] <= nums[mid]){
                if(nums[start]<=target && target < nums[mid]) {
                    end = mid -1; 
                }
                else
                    start = mid +1; 
            }
            else { //right side 
                if(nums[mid] < target && nums[end] >= target) {
                    start = mid + 1; 
                }
                else {
                    end = mid - 1; 
                }
            }
        }
        return -1; //nothing can be found 
    }
}

```  


#### Logic: 

#### Notes: 


