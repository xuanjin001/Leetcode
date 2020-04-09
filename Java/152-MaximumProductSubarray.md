# 152. Maximum Product Subarray

https://leetcode.com/problems/maximum-product-subarray/

Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

#### Example 1:
```
Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
```

#### Example 2:
```
Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
```

<br>

### My Thought: 


### Code: Which this didn't work, only worked partially
```java
class Solution {
    public int maxProduct(int[] nums) {
        if(nums.length <= 1)
            return nums[0]; 
        
        if(nums.length == 2) 
            return Math.max(nums[0], nums[1]);
        

        int maxResult = 0; 
        int result = 1; 

        for(int i=0; i<nums.length; i++) {
                result = result * nums[i]; 
                maxResult = Math.max(result, maxResult); 
            
            
        }

        return maxResult; 
    }
}
```    


## Solution
https://cheonhyangzhang.gitbooks.io/leetcode-solutions/content/152_maximum_product_subarray__medium.html

```java
public class Solution {
    public int maxProduct(int[] nums) {
        if(nums==null||nums.length==0)
            return 0;
        int maxProduct = nums[0];
        int max_temp = nums[0];
        int min_temp = nums[0];
        for(int i=1;i<nums.length;i++) {
            int a = nums[i]*max_temp;
            int b = nums[i]*min_temp;
            max_temp = Math.max(Math.max(a,b), nums[i]);
            min_temp = Math.min(Math.min(a,b), nums[i]);
            maxProduct = Math.max(maxProduct, max_temp);
        }
        return maxProduct;
    }
}

```

#### Logic: 

#### Notes: 


