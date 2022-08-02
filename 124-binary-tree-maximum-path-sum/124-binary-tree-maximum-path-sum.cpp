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
    
    int maxPathDown(TreeNode* root,int &maxi){
        if(root==NULL){
            return 0;
        }
        int leftPath=max(0,maxPathDown(root->left,maxi));
        int rightPath=max(0,maxPathDown(root->right,maxi));
        
        maxi=max(maxi,leftPath+rightPath+root->val);
        
        return max(leftPath,rightPath)+root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        
        return maxi;
    }
};