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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        ListNode* back=head;
        int length=1;
        while(back->next!=NULL){
            back=back->next;
            length++;
        }
        back->next=head;
        ListNode* slow=head,*fast=head;
        k=k%length;
        while(k>-1){
            k--;
            fast=fast->next;
        }
        while(fast!=head){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* ans;
        ans=slow->next;
        slow->next=NULL;
        return ans;
        
        
    }
};