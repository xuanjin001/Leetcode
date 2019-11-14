/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // hash map with a char and true or false
        // use bool to check if the character is repeating
        unordered_map<char, bool> map_s; 
        // set starting point as 0, and the end point as 0
        // len as the temporary length 
        // count map length 
        int start=0, end=0, len=0,map_length=0; 
        for(int i=0; i<s.size(); i++){
            // going from the first character 
            char c=s[i]; 
            if(map_s[c]) {
                //get start til it hits repeat
                while(s[start]!=c) {
                    map_s[s[start]]=false; 
                    start++; 
                }
                start++; 
            }
            else {
                map_s[c]=true; 
            }
            // calculate the length
            len=i-start+1; 
            map_length = max(map_length, len); 
        }
        return map_length; 
    }
};
// @lc code=end
