/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> map_nums; 
        for(auto i:nums) {
            map_nums[i]++; 
        }
        vector<int> result; 
        for(auto i:map_nums) {
            if(i.second == 2) {
                result.push_back(i.first); 
            }
        }
        return result; 
    }
};
// @lc code=end

