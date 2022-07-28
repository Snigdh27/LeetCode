class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1,mp2;
        
        for(int i=0;i<words1.size();i++){
            mp1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            mp2[words2[i]]++;
        }
        
        vector<string>ans1,ans2;
        
        for(auto x:words1){
            if(mp1[x]==1){
                ans1.push_back(x);
            }
        }
        for(auto x:words2){
            if(mp2[x]==1){
                ans2.push_back(x);
            }
        }
        
        vector<string>ans;
        
        for(int i=0;i<ans1.size();i++){
            ans.push_back(ans1[i]);
        }
        
        for(int i=0;i<ans2.size();i++){
            ans.push_back(ans2[i]);
        }
        
        unordered_map<string,int>mp;
        
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        
        int count=0;
        
        for(auto x:mp){
            if(x.second>=2){
                count++;
            }
        }
        
        return count;
    }
};