class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int j=INT_MAX,k=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=j){
                j=nums[i];
            }
            else if(nums[i]<=k){
                k=nums[i];
            }
            else{
                return true;
            }
        }
        
        return false;
    }
};