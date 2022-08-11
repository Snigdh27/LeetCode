/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>res(m,vector<int>(n,-1));
        
        int row_start=0,row_end=m-1,col_start=0,col_end=n-1;
        
        while(row_start<=row_end && col_start<=col_end && head){
            
            for(int i=col_start;i<=col_end && head;i++){
                res[row_start][i]=head->val;
                head=head->next;
            }
            row_start++;
            
            for(int i=row_start;i<=row_end && head;i++){
                res[i][col_end]=head->val;
                head=head->next;
            }
            col_end--;
            
            for(int i=col_end;i>=col_start && head;i--){
                res[row_end][i]=head->val;
                head=head->next;
            }
            row_end--;
            
            for(int i=row_end;i>=row_start && head;i--){
                res[i][col_start]=head->val;
                head=head->next;
            }
            col_start++;
            
        }
        
        return res;
    }
};