class Solution {
public:
    
    bool isPalindrome(string s){
        string s1=s;
        reverse(s1.begin(),s1.end());
        
        return s==s1;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        
        return "";
        
    }
};