/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 *
 * https://leetcode.com/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (56.89%)
 * Likes:    2854
 * Dislikes: 69
 * Total Accepted:    693.7K
 * Total Submissions: 1.2M
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * Reverse a singly linked list.
 * 
 * Example:
 * 
 * 
 * Input: 1->2->3->4->5->NULL
 * Output: 5->4->3->2->1->NULL
 * 
 * 
 * Follow up:
 * 
 * A linked list can be reversed either iteratively or recursively. Could you
 * implement both?
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*
    ListNode* reverseList(ListNode* head) {
        // https://leetcode.com/problems/reverse-linked-list/discuss/384172/EASIEST-CPP-SOLUTION

        ListNode* m_prev=NULL;
        ListNode* m_tmp=head; //copy of the head 
        ListNode* m_next;  

        while(m_tmp) {
            m_next = m_tmp->next; 
            m_tmp->next = m_prev; 
            m_prev = m_tmp; 
            m_tmp = m_next; 
            
        }
        return m_prev; 
    }
    */
    // second solution, Tyson like solution
    // https://leetcode.com/problems/reverse-linked-list/discuss/58343/My-CPP-Solution
    
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) 
            return head; 
        return reverse(head, NULL); 
    }
    //helper function
    ListNode* reverse(ListNode* head, ListNode* append) {
        if(head==NULL) return append; 
        ListNode* m_tmp = head->next; 
        head->next = append; 
        return reverse(m_tmp, head); 
    }
    

};
// @lc code=end