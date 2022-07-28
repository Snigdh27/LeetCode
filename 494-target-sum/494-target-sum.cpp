class Solution {
public:
    
    int subsetSum(vector<int>&nums,int val){
        int n=nums.size();
        int dp[n+1][val+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<val+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<val+1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
            
        }
        
        return dp[n][val];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        target=abs(target);
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        if(sum<target || (sum+target)%2!=0){
            return 0;
        }
        
        int val=(sum+target)/2;
        
        return subsetSum(nums,val);
    }
};