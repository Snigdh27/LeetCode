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
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int leftDepth=1+height(root->left);
        int rightDepth=1+height(root->right);
            
            
        return leftDepth>rightDepth?leftDepth:rightDepth;
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        
        int leftDepth=height(root->left);
        int rightDepth=height(root->right);
        
        if(leftDepth==rightDepth){
            return root;
        }
        
        return leftDepth>rightDepth?lcaDeepestLeaves(root->left):lcaDeepestLeaves(root->right);
    }
};