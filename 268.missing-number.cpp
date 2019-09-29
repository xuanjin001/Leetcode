/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 *
 * https://leetcode.com/problems/missing-number/description/
 *
 * algorithms
 * Easy (49.27%)
 * Likes:    1112
 * Dislikes: 1513
 * Total Accepted:    322.5K
 * Total Submissions: 654.2K
 * Testcase Example:  '[3,0,1]'
 *
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n,
 * find the one that is missing from the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,0,1]
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [9,6,4,2,3,5,7,0,1]
 * Output: 8
 * 
 * 
 * Note:
 * Your algorithm should run in linear runtime complexity. Could you implement
 * it using only constant extra space complexity?
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_nums=0; 
        int sum_total=0; 
        int diff=0; 
        for(int i=0; i<nums.size(); i++) {
            sum_nums = sum_nums + nums[i]; 
            sum_total = sum_total + i+1; 
        }

        diff= sum_total - sum_nums; 
        return diff; 

    }
};
// @lc code=end

