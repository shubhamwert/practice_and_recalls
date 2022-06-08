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
        
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans,*head;
        head=new ListNode(0);
        
        ans=head;
        int carry=0;
        while(l1 && l2){
            int r=l1->val+l2->val+carry;
            
            ans->next=new ListNode(r%10);
            carry=r/10;
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
            
        }
        
        while(l1){
            int r=l1->val+carry;
            
            ans->next=new ListNode(r%10);
            carry=r/10;
            ans=ans->next;
            l1=l1->next;
        }
        while(l2){
            int r=l2->val+carry;
            
            ans->next=new ListNode(r%10);
            carry=r/10;
            ans=ans->next;
            l2=l2->next;
        }
        if(carry){
            ans->next=new ListNode(carry);
        }
    return head->next;
    }
};