class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int res=0,n=nums.size(),start=0,end=n-1;
        const int mod=1000000007;
        
        vector<int>power(n+1,1);
        
        for(int i=1;i<=n;i++){
            power[i]=(2*power[i-1])%mod;
        }
        
        while(start<=end){
            if(nums[start]+nums[end]<=target){
                res=(res+power[end-start])%mod;
                start++;
            }
            else{
                end--;
            }
        }
        
        return res;
    }
};