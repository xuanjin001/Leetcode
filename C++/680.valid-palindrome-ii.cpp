/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        return validPalindrom(s, 0, s.size()-1); 
    }
    bool helper(string s, int left, int right) {
        /*if(left>right) return false; 
        else {
            if(s[left] == s[right]) return true; 
            else if(s[left+1] == s[right]) return true; 
            else if(s[left] == s[right-1]) return true; 
            else return false; 
        }*/
        while(left<right) {
            if(s[left]!=s[right]) {
                if(flag) return false; 
                else {
                    flag=true; 
                    return helper()
                }
                
            }
        }
    }
};

/*
bool flag=false;
    bool validPalindrome(string s) {
        return check(s, 0, s.size()-1);
    }
    
    bool check(string &str, int s, int e) {
        while(s<e) {
            if(str[s]!=str[e]) {
                if(flag) return false;
                else {
                    flag=true;
                    return check(str, s+1, e)||check(str, s, e-1);
                }
            }
            s++, e--;
        }
        return true;
    }
    */

// @lc code=end

