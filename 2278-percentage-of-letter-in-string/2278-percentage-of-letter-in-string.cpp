class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int>mp;
        
        int strLen=s.length();
        
        for(int i=0;i<strLen;i++){
            mp[s[i]]++;
        }
        
        int ans=0;
        
        for(auto x:mp){
            if(x.first==letter){
                ans+=x.second;
            }
        }
        
        return ans*100/strLen;
    }
};