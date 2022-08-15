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
    
    void insertAtTail(ListNode* &head,int val){
        ListNode* n=new ListNode(val);
        
        if(head==NULL){
            head=n;
            return;
        }
        
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        temp=temp->next;
        int sum=0;
        //vector<int>ans;
        ListNode* root=new ListNode(0);
        ListNode* ans=root;
        while(temp!=NULL){
            if(temp->val==0){
                root->next=new ListNode(sum);
                root=root->next;
                sum=0;
            }
            else{
                sum+=temp->val;
            }
            
            temp=temp->next;
        }
        
       
        
        return ans->next;
    }
};