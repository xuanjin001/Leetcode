# 64. Minimum Path Sum

https://leetcode.com/problems/minimum-path-sum/

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

```
Example:
Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.
```

### My Thought: 


### Code: 
```java
public int minPathSum(int[][] grid) {
        int m = grid[0].length;
        int n = grid.length;
        for(int i=1; i<n ; i++) grid[i][0]+=grid[i-1][0];
        for(int j=1; j<m ; j++) grid[0][j]+=grid[0][j-1];

        for(int i=1; i<n ; i++){
            for(int j=1; j<m ; j++){
                grid[i][j]+=Math.min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[n-1][m-1];
    }

```    


## Solution

https://massivealgorithms.blogspot.com/2014/06/leetcode-minimum-path-sum.html



