class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j=0,k=0;
        string s="";
        
        int n=word1.size(),m=word2.size();
        
        while(j<n || k<m){
            if(j<n){
                s+=word1[j];
                j++;
            }
            if(k<m){
                s+=word2[k];
                k++;
            }
        }
        
        return s;
        
    }
};