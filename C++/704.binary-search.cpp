/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/
        // find the middle, left, right
        return binarySearch(nums,0, nums.size()-1, target);
    }
    int binarySearch(vector<int>& nums,int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(nums[mid]<key)
     {
         low=mid+1;
     }
     else if(nums[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }
};
// @lc code=end

