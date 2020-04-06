# 206. Reverse Linked List

https://leetcode.com/problems/reverse-linked-list/

Reverse a singly linked list.

#### Example:
```
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
```

#### Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?



### My Thought: 


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
    public ListNode reverseList(ListNode head) {
        
    }
}

```    

### Notes: 
https://algorithms.tutorialhorizon.com/reverse-a-linked-list/



## Solution

https://www.educative.io/courses/coderust-hacking-the-coding-interview/lq2j

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
    public ListNode reverseList(ListNode head) {
    
    // no need to reverse if head is null 
    // or there is only 1 node.
    if (head == null || head.next == null) {
      return head;
    }

    ListNode listToDo = head.next;// the list you need to change 
    ListNode reversedList = head;// used to do the reverse
  
    reversedList.next = null;

    while (listToDo != null) {
      ListNode temp = listToDo;
      listToDo = listToDo.next;

      temp.next = reversedList;
      reversedList = temp;
    }

    return reversedList;
    }
}
```



