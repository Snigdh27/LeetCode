class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string>morseCodes={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string>code;
        
        for(auto word:words){
            string s="";
            for(auto x:word){
                s+=morseCodes[x-'a'];
            }
            code.insert(s);
        }
        
        return code.size();
    }
};