class Solution {
public:
    
    int kadaneAlgo(vector<int>&nums){
        int n=nums.size();
        int maxSum=INT_MIN;
        int currSum=0;
        
        for(int i=0;i<n;i++){
            
            if(currSum<0){
                currSum=0;
            }
            currSum+=nums[i];
            maxSum=max(maxSum,currSum);
        }
        
        return maxSum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int n=nums.size();
        int nonWrapSum=kadaneAlgo(nums);
        
        int totalSum=0;
        
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
            nums[i]=-nums[i];
        }
        
        int wrapSum=totalSum+kadaneAlgo(nums);
        
        if(wrapSum==0){
            return nonWrapSum;
        }
        
        return max(wrapSum,nonWrapSum);
    }
};