/*
 * @lc app=leetcode id=65 lang=javascript
 *
 * [65] Valid Number
 *
 * https://leetcode.com/problems/valid-number/description/
 *
 * algorithms
 * Hard (14.50%)
 * Likes:    539
 * Dislikes: 3865
 * Total Accepted:    141.9K
 * Total Submissions: 978.7K
 * Testcase Example:  '"0"'
 *
 * Validate if a given string can be interpreted as a decimal number.
 * 
 * Some examples:
 * "0" => true
 * " 0.1 " => true
 * "abc" => false
 * "1 a" => false
 * "2e10" => true
 * " -90e3   " => true
 * " 1e" => false
 * "e3" => false
 * " 6e-1" => true
 * " 99e2.5 " => false
 * "53.5e93" => true
 * " --6 " => false
 * "-+3" => false
 * "95a54e53" => false
 * 
 * Note: It is intended for the problem statement to be ambiguous. You should
 * gather all requirements up front before implementing one. However, here is a
 * list of characters that can be in a valid decimal number:
 * 
 * 
 * Numbers 0-9
 * Exponent - "e"
 * Positive/negative sign - "+"/"-"
 * Decimal point - "."
 * 
 * 
 * Of course, the context of these characters also matters in the input.
 * 
 * Update (2015-02-10):
 * The signature of the C++ function had been updated. If you still see your
 * function signature accepts a const char * argument, please click the reload
 * button to reset your code definition.
 * 
 */

// @lc code=start
/**
 * @param {string} s
 * @return {boolean}
 */

 /*I don't understand this thing.
 I need to go over this again! 
 */
/*
function milliseconds(x) {
  if (isNaN(x)) {
    return 'Not a Number!';
  }
  return x * 1000;
}

console.log(milliseconds('100F'));
// expected output: "Not a Number!"

console.log(milliseconds('0.0314E+2'));
// expected output: 3140
*/

var isNumber = function(s) {
    /*s = s.trim();//get the white spaces out
    return !isNaN(+s) && s !== '';*/
    
    s = s.trim();
    if(s.length === 0) {
        return false; 
    }

    if (isNaN(s)) {
        return false;
      }
      return true;
       
};
// @lc code=end

