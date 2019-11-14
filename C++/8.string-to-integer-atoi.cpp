/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
   //int myAtoi(string str) {
        //https://leetcode.com/problems/string-to-integer-atoi/discuss/249397/CPP-Basic-Solution-with-Comments
        /*
        int r=0;
        int i=0; 
        int sign =1; //check negative or positive number
        while(str[i]==' ') {
            i++; 
        }
        if(i==str.size()) return 0; //because it is all space

        if(str[i]=='-') {
            sign=-1; 
            i++; 
        }
        else if(str[i]=='+') {
            i++; 
        }

        // check rest of the string char or number
        for (;i<str.size();i++) {
            // if the char >9 or <0, then it is not a number
            
            if (str[i] > '9' || str[i] < '0') {
                return r*sign;
            }

            // bit minipulation    
            int n = str[i] - '0';

            // over the boundary 
            if (r > (INT_MAX-n)/10) {
                return sign > 0 ? INT_MAX : INT_MIN;
            }
            r = r*10 + n;
        }
        
        return r*sign;
        */


    //}

    //AC - 8ms - using dumb direct method;
    int myAtoi(string str) 
    {
        int i = 0;
        int sign = 1;
        long num = 0;
        while(isspace(str[i])) i++;
        if(str[i]=='-' || str[i]=='+')
            if(str[i++] == '-') sign *= -1;
        while(str[i]=='0') i++;
        while(isdigit(str[i]))
        {
            num = 10*num + str[i++]-'0';
            if(num > fabs(long(INT_MIN))) break;
        }
        num *= sign;
        if(num < INT_MIN) return INT_MIN;
        if(num > INT_MAX) return INT_MAX;
        return num;
    }

    //AC - 12ms - using built-in methods;
    /*int myAtoi(string str)
    {
        int out = 0;
        stringstream ss(str);
        ss >> out;
        return out;
    }*/
};
// @lc code=end

