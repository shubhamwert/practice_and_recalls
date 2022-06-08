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
        if(head==NULL){
            return NULL;
        }
        ListNode *fastNode,*slowNode;
        slowNode=head;
        fastNode=head;
        
        
        while(fastNode!=NULL && fastNode->next!=NULL) {
            slowNode=slowNode->next;
            fastNode=fastNode->next->next;
            
            if(slowNode==fastNode){
                 ListNode *slowNode2=head;
                 while(slowNode2!=slowNode){
                    slowNode=slowNode->next;
                    slowNode2=slowNode2->next;
                 }                
                return slowNode2;
            }
            
        }
        
        
        
        return NULL;
    }
};