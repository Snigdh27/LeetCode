class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        set<int>s1;
        
        for(auto x:mp){
            s1.insert(x.second);
        }
        
        return s1.size()<=1?true:false;
    }
};