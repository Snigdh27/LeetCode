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
    
    void inorder(TreeNode* root,vector<int>&res){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int>res;
        inorder(root,res);
        
        int start=0,end=res.size()-1;
        
        while(start<end){
            if(res[start]+res[end]==k){
                return true;
            }
            else if(res[start]+res[end]>k){
                end--;
            }
            else{
                start++;
            }
        }
        
        return false;
        
    }
};