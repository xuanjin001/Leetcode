/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (61.49%)
 * Likes:    2890
 * Dislikes: 109
 * Total Accepted:    535.6K
 * Total Submissions: 870.3K
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
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> nums_map; 
        for(int i=0; i<nums.size(); i++) {
            //check if the element can be found 
            if(nums_map.find(nums[i])!=nums_map.end()) {
                nums_map.erase(nums[i]); 
            }
            else {
                nums_map[nums[i]] = nums[i]; 
            }

        }
        return nums_map.begin()->first; 
    }
};
// @lc code=end
