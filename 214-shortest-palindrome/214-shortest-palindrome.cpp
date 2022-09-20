class Solution {
public:
    string shortestPalindrome(string s) {
        int j=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[j]==s[i]){
                j++;
            }
        }
        
        if(j==s.size()){
            return s;
        }
        
        string suffix=s.substr(j);
        
        return string(suffix.rbegin(),suffix.rend())+shortestPalindrome(s.substr(0,j))+suffix;
    }
};