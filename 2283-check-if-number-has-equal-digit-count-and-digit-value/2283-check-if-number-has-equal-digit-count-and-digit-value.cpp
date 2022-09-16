class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<num.length();i++){
            mp[num[i]]++;
        }
        
        for(int i=0;i<num.length();i++){
            char currnum=i+'0';
            int freq=num[i]-'0';
            
            if(mp[currnum]!=freq){
                return false;
            }
        }
        
        return true;
    }
};