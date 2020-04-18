# 200. Number of Islands

Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1
Example 2:

Input:
11000
11000
00100
00011

Output: 3



<br>

### My Thought: 


### Code: 
```java
class Solution {
    public int numIslands(char[][] grid) {
        
    }
}

```    


## Solution

https://github.com/wey068/Facebook-Interview-Coding/blob/master/200.%20Number%20of%20Islands.java


```java
class Solultion {
    
}

class Solution {

    public int numIslands(char[][] grid) {
        if (grid.length == 0 || grid[0].length == 0)   return 0;
        int m = grid.length, n = grid[0].length, res = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == '1') {
                    DFSMarking(grid, i, j);
                    res++;
                }
        return res;
    }

    public void DFSMarking(char[][] grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.length || j >= grid[0].length || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        DFSMarking(grid, i + 1, j);
        DFSMarking(grid, i, j + 1);
        DFSMarking(grid, i, j - 1);
        DFSMarking(grid, i - 1, j);
    }

}

```  


#### Logic: 

#### Notes: 


