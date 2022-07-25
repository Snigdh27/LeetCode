class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        string ans="";
        
        priority_queue<pair<int,char>>pq;
        
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        
        while(pq.size()>0){
            int freq=pq.top().first;
            char res=pq.top().second;
            
            for(int i=0;i<freq;i++){
                ans+=res;
            }
            
            pq.pop();
        }
        
        return ans;
    }
};