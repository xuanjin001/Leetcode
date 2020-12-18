
[inorderTraversal](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)

```
Algorithm Inorder(tree)
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)
```
```
Uses of Inorder
In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. To get nodes of BST in non-increasing order, a variation of Inorder traversal where Inorder traversal s reversed can be used.
Example: Inorder traversal for the above-given figure is 4 2 5 1 3.
```

preorderTraversal

postorderTraversal

[Concept of different traverse of a tree](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)


## Practice

### Practice problems: 
* [104. Max Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
* [110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
* [107. Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)
* [236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)
* [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
* [103. Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

<br>


[104. Max Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)


```python
class Solution: 
    def maxDepth(self, root: TreeNode) -> int: 
        if root == None: # there is no node left
            return 0 
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right)) 
        # check the left and right, pick the bigger number, and sum them together
```

[110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)

[solution](https://leetcode.com/problems/balanced-binary-tree/discuss/35741/Python-solution-with-detailed-explanation)

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        """
        :type root: TreeNode
        :rtype: bool
        """
        h, is_b = self.helper(root)
        return is_b
        
    
    def helper(self, root): 
        if root == None: 
            return 0, True
        hl, lb = self.helper(root.left)
        hr, rb = self.helper(root.right)
        if lb and rb and abs(hl - hr) <= 1: 
            return max(hl,hr) +1, True
        else: 
            return -1, False
```

[107. Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)

https://towardsdatascience.com/4-types-of-tree-traversal-algorithms-d56328450846


Notes: 
1. post-order


[Solution](https://blog.csdn.net/coder_orz/article/details/51583729)

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        res = []
        queue = [{root,0}]
        while len(queue) > 0:
            node, depth = queue.pop()
            if node: 
                if len(res) <= depth: 
                    res.insert(0, [])
                res[-(depth+1)].append(node.val)
                queue.insert(0, (node.left, depth+1))
                queue.insert(0, (node.right, depth+1))
        return res 

```

[236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
    if (not root) or p == root or q == root :
        return root
    
    left = lowestCommonAncestor(left = root, p, q)
    right = lowestCommonAncestor(right = root, p,q)

    if not left and not right: 
        return left
    else: 
        return right 



```
[Solution](https://www.cnblogs.com/grandyang/p/4641968.html)

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if root is None:
            return None
    
        m_left = self.lowestCommonAncestor(root.left, p, q)
        m_right = self.lowestCommonAncestor(root.right, p,q)

        if (m_left and m_right) or (root in [p,q]): 
            return root
        else: 
            return m_left or m_right
```

[102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)

```python

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root == None:
            return []
        
        res = []            
        nodes = [root]
        while nodes:
            res.append( [ node.val for node in nodes] )
            next_nodes = [ ]
            for node in nodes:
                if node.left:
                	next_nodes.append(node.left)
                if node.right:
                    next_nodes.append(node.right)
            nodes = next_nodes
        
        return res

```
Java: https://frankie-yanfeng.github.io/2020/02/18/Leetcode-102-Binary-Tree-Level-Order-Traversal-2020/

python: http://pythonfiddle.com/leetcode102binary-tree-level-order-traversal/

https://blog.csdn.net/coder_orz/article/details/51363095

[103. Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

Simple straightforward solution using flag to decide whether from left to right or from right to left
[Solution](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/discuss/749036/Python-Clean-BFS-solution-explained)
```python
class Solution:
    def zigzagLevelOrder(self, root):
        if not root: return []
        queue = deque([root])
        result, direction = [], 1
        
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()
                level.append(node.val)
                if node.left:  queue.append(node.left)
                if node.right: queue.append(node.right)
            result.append(level[::direction])
            direction *= (-1)
        return result

```
