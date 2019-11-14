/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        std::vector<int>::iterator it; 

        if(wordDict.size()==0) return false; 

        vector<bool> dp(s.size()+1, false); 
        dp[0]=true; 

        for(int i=1; i<=s.size(); i++) {
            for(int i=i-1; i>=0; i--) {
                for(int j=i-1; j>=0; j--) {
                    if(dp[j]){
                        string word = s.substr(j, i-j);
                        // std::find function call 
                        it = std::find(wordDict.begin(), wordDict.end(), word);
                        //if(wordDict.find(word) != wordDict.end()){
                        if (it != wordDict.end()) {
                            dp[j]=true; 
                            break; //next i
                        }
                    }
                }
            }
            return dp[s.size()]; 
            //it = std::find (vec.begin(), vec.end(), ser); 
        }
    }
};

