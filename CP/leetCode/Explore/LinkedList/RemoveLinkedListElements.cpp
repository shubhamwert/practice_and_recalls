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
    ListNode* removeElements(ListNode* head, int val) {
        
        
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        if(head==NULL){
            return head;
        }
        ListNode* prev=head,*next=head->next;
        while(next!=NULL){
            
            if(next->val==val){
                prev->next=next->next;
                next=prev->next;
            }else{
                next=next->next;
                prev=prev->next;
            }
            
        }
        
        
        return head;
    }
};