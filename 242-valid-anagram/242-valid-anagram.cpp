class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        
        map<int,int>mp1,mp2;
        
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        
        vector<pair<int,int>>v1,v2;
        
        for(auto x:mp1){
            v1.push_back({x.first,x.second});
        }
        
        for(auto x:mp2){
            v2.push_back({x.first,x.second});
        }
        
        int count=0;
        
        for(int i=0;i<v1.size();i++){
            if(v1[i].first==v2[i].first && v1[i].second==v2[i].second){
                count++;
            }
            else{
                break;
            }
        }
        
        if(count==v1.size()){
            return true;
        }
        return false;
        
    }
};