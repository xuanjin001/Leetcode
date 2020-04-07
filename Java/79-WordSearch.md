# 79. Word Search

Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

#### Example:
```
board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.
```

#### Constraints:

* board and word consists only of lowercase and uppercase English letters.
* 1 <= board.length <= 200
* 1 <= board[i].length <= 200
* 1 <= word.length <= 10^3

### My Thought: 
find the char that's matching with the "word"'s first char 
if found: 
    go find the next matching pos 


### Code: 
```java
class Solution {
    public boolean exist(char[][] board, String word) {
        
    }
}

```    

### Notes: 
Check out the turning image one, there is a relation in those two problems. 


## Solution
https://www.youtube.com/watch?v=m9TrOL1ETxI

```java
class Solution {
    
    private boolean visited[][]; 
    
    public boolean exist(char[][] board, String word) {
        int rows = board.length; 
        int cols = board[0].length; //columns 
        
        visited = new boolean[rows][cols]; //make sure that we don't visit the same index twice 

        for(int i =0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(word.charAt(0) == board[i][j] && searchWord(i, j, 0, board, word)) //we found the first match
                    return true; 

            }
        }

        return false; 


    }

    private boolean searchWord(int i, int j, int index, char[][] board, String word) { //index is the start index
        int rows = board.length; 
        int cols = board[0].length; //columns 
        
        
        if(index == word.length())
            return true; 
        
        //boundary check 
        if(i<0 || 
           i>=board.length || 
           j<0 || 
           j >= board[0].length || 
           word.charAt(index) != board[i][j] ||
           visited[i][j] ) 
            return false; 

        //mark where we have already been 
        visited[i][j] = true; 
        

        // surounding the found letter, there are four directions we have to check every single time to make sure that we can find the next matching letter 
        if(
            searchWord(i+1, j, index+1, board, word) || 
            searchWord(i-1, j, index+1, board, word) ||
            searchWord(i, j+1, index+1, board, word) || 
            searchWord(i, j-1, index+1, board, word) ) {
            return true; // if found 
        }
        // otherwise do following
            visited[i][j] = false; 

        return false; 
    }
}

```   





