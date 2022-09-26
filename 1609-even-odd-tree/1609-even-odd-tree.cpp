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
    
    
    
    bool isEvenOddTree(TreeNode* root) {
        //vector<vector<int>>ans;
        if(root==NULL){
            return true;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        int level=0,prev=0;
        while(!q.empty()){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(level%2==0 && (temp->val%2==0 || (i>0 && temp->val<=prev))){
                    return false;
                }

                if(level%2!=0 && (temp->val%2!=0 || (i>0 && temp->val>=prev))){
                    return false;
                }
                
                prev=temp->val;
                
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            level++;
        }
        return true;
        
    }
};