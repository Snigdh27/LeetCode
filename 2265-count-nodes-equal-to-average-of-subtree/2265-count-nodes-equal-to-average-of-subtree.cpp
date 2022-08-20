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
    
    int ans=0;
    
    pair<int,int>sumOfTree(TreeNode* root){
        if(root==NULL){
            return {0,0};
        }
        
        auto leftVal=sumOfTree(root->left);
        int leftSum=leftVal.first;
        int leftCnt=leftVal.second;
        
        auto rightVal=sumOfTree(root->right);
        int rightSum=rightVal.first;
        int rightCnt=rightVal.second;
        
        int sum=rightSum+leftSum+root->val;
        int count=rightCnt+leftCnt+1;
        
        if(root->val==(sum/count)){
            ans++;
        }
        
        return {sum,count};
    }
    
    int averageOfSubtree(TreeNode* root) {
        sumOfTree(root);
        
        return ans;
    }
};