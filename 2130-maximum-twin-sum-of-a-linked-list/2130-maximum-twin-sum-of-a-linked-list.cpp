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
    int pairSum(ListNode* head) {
        vector<int>ll1,ll2;
        ListNode* temp=head;
        while(temp!=NULL){
            ll1.push_back(temp->val);
            //ll2.push_back(temp->val);
            temp=temp->next;
        }
        
        //reverse(ll2.begin(),ll2.end());
        
        int maxVal=INT_MIN;
        int n=ll1.size();
        
        for(int i=0;i<=n/2;i++){
            maxVal=max(maxVal,ll1[i]+ll1[n-1-i]);
        }
        
        return maxVal;
    }
};