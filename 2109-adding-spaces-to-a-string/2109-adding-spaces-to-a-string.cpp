class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int idx=0;
        for(int i=0;i<s.length();i++){
            if(idx<spaces.size() && spaces[idx]==i){
                ans+=' ';
                idx++;
            }
            ans+=s[i];
        }
        
        return ans;
    }
};