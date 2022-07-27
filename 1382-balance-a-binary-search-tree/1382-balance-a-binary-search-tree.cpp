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
    
    TreeNode* buildBST(int start,int end,vector<int>&res){
        
        if(start>end){
            return NULL;
        }
        
        int mid=start+(end-start)/2;
        TreeNode* node=new TreeNode(res[mid]);
        node->left=buildBST(start,mid-1,res);
        node->right=buildBST(mid+1,end,res);
        
        return node;
    }
    
    void inorder(TreeNode* root,vector<int>&res){
        if(root==NULL){
            return;
        }
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        TreeNode* balancing=buildBST(0,res.size()-1,res);
        
        return balancing;
    }
};