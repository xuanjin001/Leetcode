/*
 * @lc app=leetcode id=915 lang=cpp
 *
 * [915] Partition Array into Disjoint Intervals
 *
 * https://leetcode.com/problems/partition-array-into-disjoint-intervals/description/
 *
 * algorithms
 * Medium (43.97%)
 * Likes:    249
 * Dislikes: 17
 * Total Accepted:    14.6K
 * Total Submissions: 33.2K
 * Testcase Example:  '[5,0,3,8,6]'
 *
 * Given an array A, partition it into two (contiguous) subarrays left and
 * right so that:
 * 
 * 
 * Every element in left is less than or equal to every element in right.
 * left and right are non-empty.
 * left has the smallest possible size.
 * 
 * 
 * Return the length of left after such a partitioning.  It is guaranteed that
 * such a partitioning exists.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [5,0,3,8,6]
 * Output: 3
 * Explanation: left = [5,0,3], right = [8,6]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [1,1,1,0,6,12]
 * Output: 4
 * Explanation: left = [1,1,1,0], right = [6,12]
 * 
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 2 <= A.length <= 30000
 * 0 <= A[i] <= 10^6
 * It is guaranteed there is at least one way to partition A as
 * described.
 * 
 * 
 * 
 * 
 * 
 * 
 */
/*
int partitionDisjoint(vector<int>& A) {
        vector<int> big, small;
        int temp=0;
        for(int i=0;i<A.size();i++) {
            temp=max(temp, A[i]);
            big.push_back(temp);
        }
        temp=INT_MAX;
        for(int i=A.size()-1;i>=0;i--) {
            temp=min(temp, A[i]);
            small.push_back(temp);
        }
        for(int i=0;i<A.size();i++) {
            if(big[i]<=small[A.size()-2-i]) return i+1;
        }
    }*/

// @lc code=start
class Solution {
public:
    /*int partitionDisjoint(vector<int>& A) {
        
        int sum_left=0; 
        int sum_right=0; 
        int n = A.size(); 
        vector<int> left; 
        vector<int> right; 

        for(int i = 0; i<n; i++) {
            sum_left = sum_left + A[i]; 
            sum_right = sum_right + A[n-1]; 
            if(sum_left <= sum_right) {
                left.push_back(A[i]); 
                
                n = n-1; 
            }
            else
            {
                right.push_back(A[n-1]); 
                break; 
            }
            

        }
        return left.size(); 
        
       
        
    }*/

    int partitionDisjoint(vector<int>& A) {
    	int n = A.size(), curMax = INT_MIN;
	vector<int> backMin(n, A.back());
	for (int i = n - 2; i >= 0; --i) {
	    backMin[i] = min(backMin[i + 1], A[i]);
	}
	for (int i = 0; i < n - 1; ++i) {
            curMax = max(curMax, A[i]);
            if (curMax <= backMin[i + 1]) return i + 1;
        }
	return 0;
    }
};
// @lc code=end

