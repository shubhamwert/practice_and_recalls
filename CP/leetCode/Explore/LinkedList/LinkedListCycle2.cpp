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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode *fastNode,*slowNode;
        slowNode=head;
        fastNode=head->next;
        
        
        while(fastNode!=NULL && fastNode->next!=NULL) {
            if(slowNode==fastNode){return true;}
            slowNode=slowNode->next;
            fastNode=fastNode->next->next;
            
        }
        
        
        
        return false;
    }
};