# 279. Perfect Squares

https://leetcode.com/problems/perfect-squares/

Given a positive integer n, find the least number of perfect square numbers (for example, `1, 4, 9, 16, ...`) which sum to n.

#### Example 1:
```
Input: n = 12
Output: 3 
Explanation: 12 = 4 + 4 + 4.
```

#### Example 2:
```
Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.
```
 <br>

### My Thought: 
no clue at all... 

### Code: 
```java
class Solution {
    public int numSquares(int n) {
        
    }
}

```    

#### Notes: 
Lagrange's four-square theorem: https://en.wikipedia.org/wiki/Lagrange%27s_four-square_theorem

https://mathworld.wolfram.com/LagrangesFour-SquareTheorem.html

Lagrange's four-square theorem: 4^n(8*k+7)




## Solution
https://tenderleo.gitbooks.io/leetcode-solutions-/GoogleMedium/279.html

```java
public class Solution {
    public int numSquares(int n) {
        while(n%4 == 0)  
            n /= 4;
        if(n%8 == 7) 
            return 4;
        
        for(int x=0; x*x <=n; x++){
            int y = (int)Math.sqrt(n - x*x);
            if(x*x + y*y == n){
                if(x == 0 || y == 0) return 1;
                else return 2;
            }
        }
        return 3;
    }
}
```



