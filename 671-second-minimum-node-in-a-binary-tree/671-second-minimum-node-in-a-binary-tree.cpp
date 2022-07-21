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
    
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        
        map<int,int>mp;
        
        for(int i=0;i<res.size();i++){
            mp[res[i]]++;
        }
        
        vector<int>ans;
        
        for(auto x:mp){
            ans.push_back(x.first);
        }
        
        if(ans.size()<=1){
            return -1;
        }
        
        return ans[1];
        
    }
};