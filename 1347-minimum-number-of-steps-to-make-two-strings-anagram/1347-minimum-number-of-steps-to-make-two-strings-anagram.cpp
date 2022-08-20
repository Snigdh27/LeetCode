class Solution {
public:
    int minSteps(string s, string t) {
        int frequency[26]={0};
        
        for(int i=0;i<s.size();i++){
            frequency[s[i]-'a']++;
            frequency[t[i]-'a']--;
        }
        
        int steps=0;
        
        for(int i=0;i<26;i++){
            if(frequency[i]>0){
                steps+=frequency[i];
            }
        }
        
        
        return steps;
    }
};