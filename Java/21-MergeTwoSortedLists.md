# 21. Merge Two Sorted Lists

https://leetcode.com/problems/merge-two-sorted-lists/

Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:
```
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
```

### My Thought: 
compare each slot of the linked list, and insert into a new linked list 

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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0); 
        ListNode m_head = head; 

        while(l1 != null && l2 != null){
            if(l1.val <= l2.val) {
                m_head.next = l1; 
                l1 = l1.next; 
            }
            else { //if it is not 
                m_head.next = l2; 
                l2 = l2.next;
            }
            //if none of the above qualifies, then that means this has to be moved onto the next slot. 
            m_head = m_head.next; 
        }


        if(l1!=null) {
            m_head.next = l1; 
        }

        if(l2!=null) {
            m_head.next = l2; 
        }

        return head.next; 

    }
}
      



// actual one 
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0);
        ListNode l3 = dummy;
        
        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) {
                l3.next = l1;
                l1 = l1.next;
            } else {
                l3.next = l2;
                l2 = l2.next;
            }
            l3 = l3.next;
        }
        
        if (l1 != null) {
            l3.next = l1;
        }
        
        if (l2 != null) {
            l3.next = l2;
        }
        
        return dummy.next;        
    }
}

```    


## Solution
http://www.goodtecher.com/leetcode-21-merge-two-sorted-lists/


#### Logic: 
This could also be solved with merge sort. 

The above solution logic: 
```
create another empty linked list 
compare node by node
```

#### Notes: 
