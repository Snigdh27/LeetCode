class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=1,j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[j]>k){
                ans++;
                j=i;
            }
        }
        
        return ans;
    }
};