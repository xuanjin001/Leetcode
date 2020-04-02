# 2. Add Two Numbers

https://leetcode.com/problems/add-two-numbers/

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#### Example:
```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807
```


### My Thought: 
output the linked list to be string and then to be int 
add the whole thing together 
transfer to a linked list 
--> in theory, the above method would work, but in code, it is not... 


### Code: --> my thing didn't work at all. 
```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

http://www.goodtecher.com/leetcode-2-add-two-numbers/
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        int carry = 0;
                
        while (l1 != null && l2 != null) {
            int value = (l1.val + l2.val + carry) % 10;
            carry = (l1.val + l2.val + carry) / 10;
            ListNode result = new ListNode(value);
            current.next = result;
            l1 = l1.next;
            l2 = l2.next;
            current = result;
        }
        
        while (l1 != null) {
            int value = (l1.val + carry) % 10;
            carry = (l1.val + carry) / 10;            
            ListNode result = new ListNode(value);
            current.next = result;
            l1 = l1.next;
            current = result;            
        }
        
        while (l2 != null) {
            int value = (l2.val + carry) % 10;
            carry = (l2.val + carry) / 10;     
            ListNode result = new ListNode(value);
            current.next = result;
            l2 = l2.next;
            current = result;            
        }        
        
        if (carry != 0) {
            ListNode result = new ListNode(carry);
            current.next = result;
            current = result;             
        }
        
        return dummy.next;        
    }
}

```  

https://zxi.mytechroad.com/blog/list/leetcode-2-add-two-numbers/
```java
class Solution {
  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    int sum = 0;
    ListNode dummy = new ListNode(0);
    ListNode tail = dummy;
    while (l1 != null || l2 != null || sum != 0) {
      if (l1 != null) {
        sum += l1.val;
        l1 = l1.next;
      }
      if (l2 != null) {
        sum += l2.val;
        l2 = l2.next;
      }
      tail.next = new ListNode(sum % 10);
      sum /= 10;
      tail = tail.next;
    }
    return dummy.next;
  }
}

```


## Solution

http://www.goodtecher.com/leetcode-2-add-two-numbers/

https://zxi.mytechroad.com/blog/list/leetcode-2-add-two-numbers/


