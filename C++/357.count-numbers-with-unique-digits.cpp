/*
 * @lc app=leetcode id=357 lang=cpp
 *
 * [357] Count Numbers with Unique Digits
 */

// @lc code=start
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
/*
https://leetcode.com/problems/count-numbers-with-unique-digits/discuss/123898/Three-C%2B%2B-Solutions-Summary-(DP-Static-DP-Backtracking)
https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/tutorial/
*/
if(n == 0) return 1;
        if(n>10) n = 10;
        static vector<int> dp= {10};
        if(dp.size()<=n){
            int num = 9, accum = 9;
            int j = 1;
            while(j++<=dp.size())
                accum *= num--;
            for(int i = dp.size(); i<n; i++){
                dp.push_back(accum);
                dp[i] += dp[i-1];
                accum *= num--;
            }
        }
        return dp[n-1];
    }
};
// @lc code=end

