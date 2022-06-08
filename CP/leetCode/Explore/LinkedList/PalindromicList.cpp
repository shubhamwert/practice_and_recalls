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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* i=head;
        while(i!=NULL){
            s.push(i->val);
            i=i->next;
        }
        while(!s.empty()){
            int k=s.top();
            if(k!=head->val){
                return false;
            }
            head=head->next;
            s.pop();
            
        }
        
        
        return true;
    }
};