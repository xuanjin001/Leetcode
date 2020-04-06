# 148. Sort List

https://leetcode.com/problems/sort-list/

Sort a linked list in O(n log n) time using constant space complexity.

#### Example 1:
```
Input: 4->2->1->3
Output: 1->2->3->4
```

#### Example 2:
```
Input: -1->5->3->4->0
Output: -1->0->3->4->5
```

### My Thought: 
Create a new linked list, then organize the 

I don't freaking know. 

Actually, Linked List is the best to sort with merge sort 


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
    public ListNode sortList(ListNode head) {
        if(head == null || head.next == null) return head; //when it comes to LinkedList, this is always the first thing to check 

        ListNode slow = head; //slow pointer
        ListNode fast = head.next; //second pointer, faster pointer 

        while(fast != null && fast.next != null) {
            fast = fast.next.next; 
            slow = slow.next; 
        }

        ListNode mid = slow.next; 
        slow.next = null; 
        return merge(sortList(head), sortList(mid)); 


    }

    private ListNode merge(ListNode l1, ListNode l2) {
        ListNode m_head = new ListNode(0); // new LinkedList m_head
        ListNode m_tail = m_head; 

        while(l1 != null && l2 != null) {
            if(l1.val > l2.val) { // check the value 
                ListNode m_tmp = l1; 
                l1 = l2; 
                l2 = tmp; //getting the nodes in line 

            }
            m_tail.next = l1; 
            l1 = l1.next; 
            m_tail = m_tail.next; 
        }
        m_tail.next = 
    }
}

```    


## Solution

https://zxi.mytechroad.com/blog/divide-and-conquer/leetcode-148-sort-list/


https://blog.csdn.net/katrina95/article/details/79073460

```java
class Solution {
    public ListNode sortList(ListNode head) {
        if(head == null || head.next == null) return head; 

        ListNode slow = head, fast = head, pre = null; 

        while(fast != null && fast.next != null) {
            pre = slow; 
            slow = slow.next; 
            fast = fast.next.next; 
        }

        pre.next = null; 

        ListNode l1 = sortList(head); 
        ListNode l2 = sortList(slow); 

        return merge(l1, l2); 


    }

    public ListNode merge(ListNode head, ListNode head2) {
        ListNode dummy = new ListNode(-1); 
        ListNode p = dummy; 

        while(head != null && head2 != null) {
            if(head.val < head2.val) {
                p.next = head; 
                head = head.next; 
            }
            else {
                p.next = head2; 
                head2 = head2.next; 
            }
            p = p.next; 
        }

        if(head != null) {
            p.next = head; 
        }

        if(head2 != null) {
            p.next = head2; 
        }

        return dummy.next; 
    }
}
```


