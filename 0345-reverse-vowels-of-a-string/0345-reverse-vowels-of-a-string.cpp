class Solution {
public:
    string reverseVowels(string s) {
        string vowel="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vowel+=s[i];
            }
        }
        
        reverse(vowel.begin(),vowel.end());
        
        string ans="";
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans+=vowel[k];
                k++;
            }
            else{
                ans+=s[i];
            }
        }
        
        return ans;
    }
};