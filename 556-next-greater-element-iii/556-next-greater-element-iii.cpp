class Solution {
public:
    int nextGreaterElement(int n) {
        string s1=to_string(n);
        vector<int>ans;
        do{
            ans.push_back(stoll(s1));
        }while(next_permutation(s1.begin(),s1.end()));
        
        
        int idx=-1;
        
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size();i++){
            if(ans[i]==n){
                idx=i;
            }
        }
        
        if(idx==ans.size()-1){
            return -1;
        }
        else{
            return ans[idx+1];
        }
        
        return 0;
    }
};