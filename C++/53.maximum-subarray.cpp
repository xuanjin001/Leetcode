/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //https://leetcode.com/problems/maximum-subarray/discuss/281415/cpp

        vector<int> dp; 
        dp.push_back(nums[0]); 

        for(int i=1; i<nums.size(); i++){
            if(dp[i-1]<0) //negative number
                dp.push_back(nums[i]); 
            else 
                dp.push_back(dp[i-1]+nums[i]); 
        }
        return *max_element(dp.begin(), dp.end()); 

        
    }
};
// @lc code=end

