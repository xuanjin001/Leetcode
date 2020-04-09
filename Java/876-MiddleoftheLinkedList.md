# 
Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.


#### Example 1:
```
Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
```
```
Note that we returned a ListNode object ans, such that:

ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.
```

#### Example 2:
```
Input: [1,2,3,4,5,6]
Output: Node 4 from this list (Serialization: [4,5,6])

Since the list has two middle nodes with values 3 and 4, we return the second one.
```

#### Note:
The number of nodes in the given list will be between 1 and 100.


### My Thought: 
The middle--> binary search 
As long as it is sorted 

### Code: 
```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode m_slow = head, m_fast = head; 

        while(m_fast!=null && m_fast.next!=null) {
            m_slow = m_slow.next; 
            m_fast = m_fast.next; 
            if(m_fast.next!=null) m_fast = m_fast.next; 
        } 

        return m_slow; 

    }
}


```  


## Solution
```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode slow = head, fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next;//move first with fast
            if (fast.next != null) fast = fast.next;//move secnd time with fast 
        }
        return slow;
    }
}
```


#### Logic: 
two pointers: fast and slow 




<br>

#### Notes: 




