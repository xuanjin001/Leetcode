# 543. Diameter of Binary Tree

Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

#### Example:
Given a binary tree
```
          1
         / \
        2   3
       / \     
      4   5

```
Return **3**, which is the length of the path [4,2,1,3] or [5,2,1,3].

**Note:** The length of path between two nodes is represented by the number of edges between them.


<br>

### My Thought: 
This problem is checking on to see how tall is the tree. 

check if the tree has children, if there are, count add one, then add the root. 

### Code: Not working 
```java
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public int diameterOfBinaryTree(TreeNode root) {
        int count = 0; 
        if(root.left==null && root.right==null)
            return 1; 
        else {
            while(root.right!=null || root.left!=null) {
                count++; 
                if(root.right!=null)
                    root = root.right; 
                else if(root.left!=null)
                    root = root.left; 
            }
        }

        return count; 
    }


}

```    

## Solution
```java
class Solution {
    int ans;
    public int diameterOfBinaryTree(TreeNode root) {
        ans = 1;
        depth(root);
        return ans - 1;
    }
    public int depth(TreeNode node) {
        if (node == null) return 0;
        int L = depth(node.left);
        int R = depth(node.right);
        ans = Math.max(ans, L+R+1);
        return Math.max(L, R) + 1;
    }
}
```

#### Logic: 
```java
class Solution {
    int ans; 
    public int diameterOfBinaryTree(TreeNode root) {
        ans = 1; 
        depth(root); 
        
    }
    
    public int depth(node) {
        if(node==null) return 0; //there is no children left 
        
        int L = depth(node.left); 
        int R = depth(node.right); 
        // get the max between current and all the last cumulate count 
        ans = Math.max(ans, L+R+1); 
        return Math.max(L,R)+1; 
    }
}
```

#### Notes: 


