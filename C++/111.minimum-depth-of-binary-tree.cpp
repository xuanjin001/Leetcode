/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
 *
 * https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
 *
 * algorithms
 * Easy (35.89%)
 * Likes:    864
 * Dislikes: 474
 * Total Accepted:    327.8K
 * Total Submissions: 912.4K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, find its minimum depth.
 * 
 * The minimum depth is the number of nodes along the shortest path from the
 * root node down to the nearest leaf node.
 * 
 * Note: A leaf is a node with no children.
 * 
 * Example:
 * 
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * return its minimum depth = 2.
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        //https://leetcode.com/problems/minimum-depth-of-binary-tree/discuss/36207/Recursive-cpp-solution

        if(!root) return 0; 
        int left_leave = minDepth(root->left); 
        int right_leave = minDepth(root->right); 

        // counting the current root
        // if the left is not null, you need to check the right leave number 
        
        if(!root->left) return 1+right_leave; 
        if(!root->right) return 1+left_leave; 

        return 1+ min(left_leave, right_leave); 
        
    }

};
// @lc code=end