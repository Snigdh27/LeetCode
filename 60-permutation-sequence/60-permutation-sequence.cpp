class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }
        
        cout<<s<<endl;
        
        vector<string>ans;
        do{
            ans.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        
        return ans[k-1];
        
    }
};