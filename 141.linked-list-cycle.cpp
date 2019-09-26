/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */
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
    bool hasCycle(ListNode *head) {
        // an empty linked list is circular--> check with interviewer
        if(head==NULL) return true; 

        //Next of head
        struct ListNode *m_node = head->next; 

        //a loop would stop in two cases: 
        //if circular or not circular
        while(m_node!=NULL && m_node != head) {
            m_node = m_node ->next; 
        }

        //if loop stopped because of circular condition

        return (m_node == head); 

    }
};

