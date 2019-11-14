/*
 * @lc app=leetcode id=136 lang=java
 *
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (61.97%)
 * Likes:    3015
 * Dislikes: 117
 * Total Accepted:    562.8K
 * Total Submissions: 908.2K
 * Testcase Example:  '[2,2,1]'
 *
 * Given a non-empty array of integers, every element appears twice except for
 * one. Find that single one.
 * 
 * Note:
 * 
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 * 
 * Example 1:
 * 
 * 
 * Input: [2,2,1]
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,1,2,1,2]
 * Output: 4
 * 
 * 
 */

// @lc code=start
class Solution {
    public int singleNumber(int[] nums) {
        HashSet<Integer> map=new HashSet<Integer>();
    	for(int i=0;i<nums.length;i++) {
    		if(!map.contains(nums[i])) {
    			map.add(nums[i]);
    		}
    		else {
    			map.remove(nums[i]);
    		}
    	}
    	for(int i:map) return i;
    	
		return -1;
    }
}
// @lc code=end

