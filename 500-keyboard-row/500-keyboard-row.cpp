class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        
        string s1="QWERTYUIOPqwertyuiop";
        string s2="ASDFGHJKLasdfghjkl";
        string s3="ZXCVBNMzxcvbnm";
        
        
        int a=0,b=0,c=0;
        
        for(auto i:words){
            for(auto j:i){
               if(s1.find(j)!=string::npos){
                   a++;
               } 
               if(s2.find(j)!=string::npos){
                   b++;
               }
               if(s3.find(j)!=string::npos){
                   c++;
               } 
            }
            if(i.size()==max({a,b,c})){
                ans.push_back(i);
            }
            a=0,b=0,c=0;
        }
        
        return ans;
    }
};