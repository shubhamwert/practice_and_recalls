/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int level=0;
        q.push(root);
        while(!q.empty()){
            vector<int> toPush={};
            int size=q.size();
            while(size>0){
                if(q.front()!=NULL){
                    toPush.push_back(q.front()->val);
                    q.push(q.front()->left);
                    q.push(q.front()->right);
                }
                
                
                q.pop();
                
                size--;
                
            }
            if (toPush.size()>0)
                ans.push_back(toPush);
            
            
            
            
            
            
        }
        
        return ans;
        
        
        
    }
};