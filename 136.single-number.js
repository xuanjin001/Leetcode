/*
 * @lc app=leetcode id=136 lang=javascript
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
 * refer to: https://leetcode.com/problems/single-number/discuss/396584/Clean-JavaScript-solution
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
/*var singleNumber = function(nums) {
    const map = {}; 
    for(let n of nums) {
        if(map[n]==null) map[n]=0; 
        map[n]++; 
    }
    for(let n in map) {
        if(map[n]===1) return Number(n); 
    }

    
    
};*/


function singleNumber(nums) {
    const map = {};
    for (let n of nums) {
      if (map[n] == null) map[n] = 0;
      map[n]++;
    }
  
    for (let n in map) {
      if (map[n] === 1) return Number(n);
    }
  }
// @lc code=end

