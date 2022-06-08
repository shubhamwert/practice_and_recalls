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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p=head,*k;
        
        while(n>0){
            p=p->next;
            n--;
        }
        k=head;
        while(p!=NULL && p->next!=NULL){
            p=p->next;
            k=k->next;
        }
        
        
        
        if(p!=NULL)
            k->next=k->next->next;
        else
            return head->next;
        return head;
    }
};