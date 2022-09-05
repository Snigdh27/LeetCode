/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        
        queue<Node*>q;
        q.push(root);
        
        //vector<vector<int>>ans;
        int count=0;
        while(!q.empty()){
            int n=q.size();
            //vector<int>v;
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                for(auto x:temp->children){
                    q.push(x);
                }
                //v.push_back(temp->val);
            }
            count++;
        }
        
       // int depth=ans.size();
        
        return count;
    }
};