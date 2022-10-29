class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>v;
        
        for(int i=0;i<plantTime.size();i++){
            v.emplace_back(growTime[i],plantTime[i]);
        }
        
        sort(v.begin(),v.end());
        
        int ans=0;
        
        for(auto [i,j]:v){
            ans=max(ans,i)+j;
        }
        
        return ans;
    }
};