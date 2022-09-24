class Solution {
public:
    
    int count=1;
    
    void isPalindrome(string s,int i,int j){
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
    }
    
    int countSubstrings(string s) {
        if(s.length()==0){
            return 0;
        }
        for(int i=0;i<s.length()-1;i++){
            isPalindrome(s,i,i);
            isPalindrome(s,i,i+1);
        }
        
        return count;
    }
};