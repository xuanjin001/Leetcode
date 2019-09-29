/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end(); ){           
            if((*it)==val)               
                nums.erase(it);
            else
                it++;            
        }
        
        return nums.size();
    }
};
// @lc code=end

