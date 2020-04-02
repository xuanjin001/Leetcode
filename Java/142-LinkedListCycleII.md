# 142. Linked List Cycle II

https://leetcode.com/problems/linked-list-cycle-ii/

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

**Note:** Do not modify the linked list.

 

#### Example 1:
```
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
```
![141-EX1](img/141-EX1.png)

#### Example 2:
```
Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
```
![141-EX2](img/141-EX2.png)

#### Example 3:
```
Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.
```
![141-EX3](img/141-EX3.png)


#### Follow-up:
Can you solve it without using extra space?


### My Thought: 


### Code: 
```java
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {

        if (head == null || head.next == null) {
            return null;
        }

        // initialize 
        ListNode m_slow = head;
        ListNode m_head = head; 
        ListNode m_fast = head.next;
        
        while (m_slow != m_fast) {
            if (m_fast == null || m_fast.next == null) {
                return null; 
            }
            m_slow = m_slow.next;
            m_fast = m_fast.next.next;
        }

        while(m_head != m_slow.next) {
            m_slow = m_slow.next; 
            m_head = m_head.next; 
        }
        
        return m_head;
    }
}

```    


## Solution
https://github.com/awangdev/LintCode/blob/master/Java/Linked%20List%20Cycle%20II.java




