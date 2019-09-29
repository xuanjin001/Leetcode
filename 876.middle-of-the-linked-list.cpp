/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
   int count =0; 
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;//make a copy of the linked list 
        

        //if(head->next==NULL) return head; 
        //if(head->next->next==NULL) return head->next; 
    
    
    //vector<int>& m_ListNode; 
    while(head!=NULL) {
       // m_ListNode.push_back(head->val); 
        count++; 
        head = head->next; 
    }
    
    count = count/2; 
    
    while(count--){
            temp=temp->next;
        }
        return temp;
}
/*
int count=0;
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        while(head!=NULL){
            count++;
            head=head->next;
        }
       count=count/2;
        while(count--){
            temp=temp->next;
        }
        return temp;
    }*/

};
// @lc code=end

