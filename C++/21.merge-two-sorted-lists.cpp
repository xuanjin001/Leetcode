/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        /*ListNode tmp(0); 
        ListNode* m_current = &tmp; 
        while(l1 && l2) {
            if(l1->val < l2->val){
                m_current->next = l2; 
                l1 = l1->next;
            }
            else {
                m_current->next=l2; 
                l2=l2->next;
            }
            m_current = m_current->next; 
        }
        if(l1) m_current->next=l1; 
        if(l2) m_current->next=l2; 
        return tmp.next; */
         ListNode* l3;
        l3=new ListNode(0);
        ListNode* result = l3;     
        while(l1 && l2){
            if(l1->val <= l2->val){
                l3 -> next= new ListNode(l1->val);               
                l1=l1->next;                
                l3=l3->next;                
            }
            else if(l1->val > l2->val){
                l3->next= new ListNode(l2->val);               
                l2=l2->next;                 
                l3=l3->next;               
            }            
        }
        while(l1 != NULL){
            l3->next= new ListNode(l1->val);               
            l1=l1->next;                 
            l3=l3->next;               
        }    
        while(l2 != NULL){            
            l3->next= new ListNode(l2->val);               
            l2=l2->next;             
            l3=l3->next;               
        }     
       
       return result->next;
    }

};

