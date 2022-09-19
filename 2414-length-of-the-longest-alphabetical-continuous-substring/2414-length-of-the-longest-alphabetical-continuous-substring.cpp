class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int count=1,max_value=1;
        
        for(int i=0;i<n-1;i++){
            if(s[i]+1==s[i+1]){
                count++;
            }
            else{
                count=1;
            }
            max_value=max(max_value,count);
        }
        
        return max_value;
    }
};