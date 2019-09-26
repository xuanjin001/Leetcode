/*
 * @lc app=leetcode id=402 lang=cpp
 *
 * [402] Remove K Digits
 */
class Solution {
public:
    string removeKdigits(string num, int k) {
        //https://leetcode.com/problems/remove-k-digits/discuss/375147/Cpp-Intuitive-Solution
        if(num.length()==k) return "0"; 
        if(k==0) return num; 
        int counter =0; 
        while(counter!=k) {
            for(int i=0; i<num.length(); i++) {
                if(num[i]>num[i+1]) {
                    num.erase(i,1); //only remove one degit at a time 
                    counter++; 
                    break; //has to break in order to remove digit one at a time 
                }
            }
        }
        while(num[0]=='0' && num.length()>1) num.erase(0,1); //checking special cases 

        return num; 
    }
};

