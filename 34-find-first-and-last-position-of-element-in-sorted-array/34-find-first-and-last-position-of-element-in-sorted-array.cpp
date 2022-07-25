class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        
        vector<int>ans(2,-1);
        
        while(start<nums.size()){
            if(nums[start]==target){
                ans[0]=start;
                break;
            }
            start++;
        }
        
        while(end>=0){
            if(nums[end]==target){
                ans[1]=end;
                break;
            }
            end--;
        }
        
        return ans;
    }
};