/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 *
 * https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
 *
 * algorithms
 * Easy (54.18%)
 * Likes:    1880
 * Dislikes: 175
 * Total Accepted:    179.5K
 * Total Submissions: 331K
 * Testcase Example:  '[4,3,2,7,8,2,3,1]'
 *
 * Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some
 * elements appear twice and others appear once.
 * 
 * Find all the elements of [1, n] inclusive that do not appear in this array.
 * 
 * Could you do it without extra space and in O(n) runtime? You may assume the
 * returned list does not count as extra space.
 * 
 * Example:
 * 
 * Input:
 * [4,3,2,7,8,2,3,1]
 * 
 * Output:
 * [5,6]
 * 
 * 
 */

// @lc code=start
class Solution {
public:
/*
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/discuss/167020/Cpp-Solution-O(n)
        //bubble sort 
        //O(n)
        vector<int> missing; 
        
        for(int i=0; i<nums.size(); i++){
            while(nums[i]!=i+1 && nums[nums[i]-1]!=nums[i]){
                swap(nums[i], nums[nums[i]-1]); 
            }
        }
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=i+1)
                missing.push_back(i+1); 
        }
        return missing; 
    }
    */

    //map 
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result = vector<int>();
	 map<int, int> maplist = map<int, int>();
 
	 for (int i = 0; i < nums.size(); i++)
		 maplist[nums[i]]++;

	 for (int i = 1; i < nums.size()+1; i++)
		if (maplist[i] == 0)
			result.push_back(i);

	 return result;
    }
    
};
// @lc code=end
