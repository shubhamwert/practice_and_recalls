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
        ListNode* ans=new ListNode();
        
        auto r=ans;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry != 0){
            if(l1!=NULL){
                carry=carry+l1->val;
            }
            if(l2!=NULL){
                carry=carry+l2->val;
            }
            cout<<carry%10;
            ListNode* next=new ListNode(carry%10);
            
            
            ans->next=next;
            carry=carry/10;
            if(l1!=NULL){
                l1=l1->next;
                
            }
            if(l2!=NULL){
                l2=l2->next;}
            ans=ans->next;
        }
        
        
        return r->next;
    }
};