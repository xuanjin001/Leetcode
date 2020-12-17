# Preorder 

Given the `root` of a binary tree, return the preorder traversal of its nodes' values.

logic: 
1. visit node 
2. visit left
3. visit right 

### iterative solution
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        stack, res = [root], []
        while stack: 
            node = stack.pop()
            if node: 
                res.append(node.val)
                stack.append(node.right)
                stack.append(node.left)
        return res 
```

### recursive solution
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        res = []
        self.dfs(root, res)
        return res
    
    def dfs(self, root, res): 
        if root: 
            res.append(root.val)
            self.dfs(root.left, res)
            self.dfs(root.right, res)
```

Note: https://leetcode.com/problems/binary-tree-preorder-traversal/discuss/45290/Python-solutions-(recursively-and-iteratively).

# Inorder 

Given the `root` of a binary tree, return the inorder traversal of its nodes' values.

logic: 
1. left
2. node
3. right

### iterative solution
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        res, stack = [], []
        while True: # forever loop
            while root: 
                stack.append(root)
                root = root.left
            if not stack:
                return res # break point
            node = stack.pop()
            res.append(node.val)
            root = node.right
```

### recursive solution
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        res = []
        self.dfs(root, res)
        return res

    
    def dfs(self, root, res): 
        if root: 
            self.dfs(root.left, res)
            res.append(root.val)
            self.dfs(root.right, res)

```

Note: https://leetcode.com/problems/binary-tree-inorder-traversal/discuss/31381/Python-recursive-and-iterative-solutions.


# Postorder

Given the `root` of a binary tree, return the postorder traversal of its nodes' values.

logic: 
1. left
2. right
3. node

### iterative solution
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        res, stack = [], [root]
        while stack: 
            node = stack.pop()
            if node: 
                res.append(node.val)
                stack.append(node.left)
                stack.append(node.right)
        return res[::-1] #return in reverse order 
```

### recursive solution
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        res = []
        self.bfs(root, res)
        return res

    def bfs(self, root, res): 
        if root: 
            self.bfs(root.left, res)
            self.bfs(root.right, res)
            res.append(root.val)

        

```

Note: https://leetcode.com/problems/binary-tree-postorder-traversal/discuss/45786/Python-recursive-and-iterative-solutions.


#### Note: 

https://leetcode.com/problems/binary-tree-inorder-traversal/discuss/332283/Python-recursive-and-iterative-solutions
