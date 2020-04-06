# 19. Remove Nth Node From End of List

https://leetcode.com/problems/remove-nth-node-from-end-of-list/

Given a linked list, remove the n-th node from the end of list and return its head.

#### Example:
```
Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
```

#### Note:

Given n will always be valid.

#### Follow up:

Could you do this in one pass?


### My Thought: 


### Code: NOT WORKING
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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count = 0; 
        while(head.next != null) {
            count++; 
        }

        int remain = count - n; 

        for(int i =0; i<remain; i++) {
            if(i == remain-1) {
                head.next = head.next.next; 
                break; 
            }
            else head = head.next; 
        }

        return head; 
        
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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy = new ListNode(0); 
        dummy.next = head; 
        int length = 0; 
        
        ListNode m_head = head; 
        while(m_head != null) {
            length++; 
            m_head = m_head.next; 
        }
        length = length - n; 
        
        m_head = dummy; 
        
        while(length > 0) {
            length--; 
            m_head = m_head.next; 
        }
        
        m_head.next = m_head.next.next; 
        
        return dummy.next; 
        
    }


}
```


