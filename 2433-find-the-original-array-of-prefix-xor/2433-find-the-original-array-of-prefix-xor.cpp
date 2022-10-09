class Solution {
public:
    
   /* int prefXor(vector<int>&arr,int n){
        if(n==1){
            return arr[0];
        }
        int ans=arr[0];
        
            for(int i=1;i<n;i++){
                ans^=arr[i];
            }
        
        return ans;
    }*/
    
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int>ans(n);
        /*ans[0]=pref[0];
        for(int i=1;i<n;i++){
            int temp=prefXor(ans,i);
            ans[i]=temp^pref[i];
        }*/
        
        for(int i=n-1;i>=1;i--){
            pref[i]^=pref[i-1];
        }
        
        return pref;
    }
};