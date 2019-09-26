/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        //https://leetcode.com/problems/linked-list-cycle-ii/discuss/151434/2-c%2B%2B-solutions.-Beat-100.-With-comments-proof-and-description.
        unordered_set<ListNode* > seen; //visited or not
        // keep adding nodes to the hashset until we hit a duplicate
        // or the end of the list 
        while(head&&seen.insert(head).second) {
            head = head->next; 
        }
        return head; 
    }
};

