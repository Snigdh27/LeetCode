class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int>ans(n);
        
        sort(deck.begin(),deck.end());
        
        deque<int>dq;
        
        for(int i=0;i<deck.size();i++){
            dq.push_back(i);
        }
        
        int idx=0;
        int i=0;
        while(dq.size()>0){
            if(idx==0){
                ans[dq.front()]=deck[i++];
                dq.pop_front();
            }
            else{
                dq.push_back(dq.front());
                dq.pop_front();
            }
            idx=idx^1;
        }
        
        return ans;
    }
};