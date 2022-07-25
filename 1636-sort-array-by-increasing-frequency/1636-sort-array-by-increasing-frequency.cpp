class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(auto x:mp){
            pq.push({-1*x.second,x.first});
        }
        
        while(pq.size()>0){
            int freq=-1*pq.top().first;
            int element=pq.top().second;
            for(int i=1;i<=freq;i++){
                ans.push_back(element);
            }
            
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};