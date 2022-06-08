/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL,*next,*current=head;
        if(head==NULL){
            return NULL;
        }
        while(current->next!=NULL){
            next=current->next;
            
            current->next=prev;
            
            prev=current;
            current=next;
        }
        
        current->next=prev;        
        
        return current;
    }
};