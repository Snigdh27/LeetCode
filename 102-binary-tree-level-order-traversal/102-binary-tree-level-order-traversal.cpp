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
        vector<vector<int>>ans;
        
        if(root==NULL){
            return ans;
        }
        
        queue<TreeNode*>pq;
        pq.push(root);
        
        while(!pq.empty()){
            int size=pq.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* node=pq.front();
                pq.pop();
                if(node->left!=NULL){
                    pq.push(node->left);
                }
                if(node->right!=NULL){
                    pq.push(node->right);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};