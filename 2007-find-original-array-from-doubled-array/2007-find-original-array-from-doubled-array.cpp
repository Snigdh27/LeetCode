class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        
        int n=changed.size();
        
        if(n%2!=0){
            return ans;
        }
        
        unordered_map<int,int>mp;
        sort(changed.begin(),changed.end(),greater<int>());
        
        for(int i=0;i<changed.size();i++){
            if(mp.find(changed[i]*2)!=mp.end() && mp[changed[i]*2]!=0){
                ans.push_back(changed[i]);
                mp[changed[i]*2]--;
            }
            else{
                mp[changed[i]]++;   
            }
        }
        
        
        if(ans.size()!=changed.size()/2){
            return vector<int>{};
        }
       return ans;       
        
    }
};