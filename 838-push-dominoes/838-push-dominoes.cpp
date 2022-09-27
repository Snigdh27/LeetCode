class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        vector<int>ans(n);
        
        int res=0;
        
        for(int i=0;i<n;i++){
            if(dominoes[i]=='R'){
                res=n;
            }
            else if(dominoes[i]=='L'){
                res=0;
            }
            else{
                res=max(res-1,0);
            }
            ans[i]+=res;
        }
        
        res=0;
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='L'){
                res=n;
            }
            else if(dominoes[i]=='R'){
                res=0;
            }
            else{
                res=max(res-1,0);
            }
            ans[i]-=res;
        }
        
        string val="";
        for(int i=0;i<n;i++){
            if(ans[i]>0){
                val+='R';
            }
            else if(ans[i]<0){
                val+='L';
            }
            else{
                val+='.';
            }
        }
        
        return val;
    }
};