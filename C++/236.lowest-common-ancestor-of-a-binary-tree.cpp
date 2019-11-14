/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // DFS 
        // making the current node pointer the same as the root of the tree
        // and set the previous pointer 
        TreeNode* cur=root, *prev; 
        // generate a tree with visits, and visit p
        vector<TreeNode*> visit, visitp; 
        // check if we alredy visited the node by checking the vector
        // also check the current node 
        while(!visit.empty() || cur) {
            if(cur) {
                // save the current one and move onto the left leaf 
                visit.push_back(cur); 
                cur = cur->left; 
            } else {
                // already visited? then move onto the right leaf 
                cur = visit.back();
                if(cur->right && cur->right!=prev){
                    cur = cur->right; 
                } else {
                    if(cur == p || cur == q) {
                        if(visitp.empty()) visitp = visit; 
                        else break; 
                    }
                    visit.pop_back(); 
                    prev = cur; 
                    cur = nullptr; 
                }
            }
        }
        if(visit.empty()) return nullptr; 
        int s = min(visit.size(), visitp.size()); 
        for(int i = 0; i<s; i++) {
            if(visit[i]!=visitp[i]) return visit[i-1]; 
        }
        return visit[s-1]; 
    }
};
// @lc code=end

