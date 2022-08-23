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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        vector<int>v2=v;
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
            if(v[i]!=v2[i]){
                return false;
            }
        }
        
        return true;
    }
};