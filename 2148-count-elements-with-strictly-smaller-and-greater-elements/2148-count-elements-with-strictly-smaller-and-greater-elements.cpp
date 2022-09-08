class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        //[2,7,11,15]
        if(nums.size()<2){
            return 0;
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[0] && nums[i]<nums[nums.size()-1]){
                count++;
            }
        }
        
        return count;
    }
};