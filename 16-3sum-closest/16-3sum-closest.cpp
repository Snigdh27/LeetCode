class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<nums.size() && ans!=0;i++){
            int val=nums[i];
            int l=i+1;
            int r=nums.size()-1;
            
            while(l<r){
                int sum=val+nums[l]+nums[r];
                if(abs(target-sum)<abs(ans)){
                    ans=target-sum;
                }
                if(sum<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        
        return target-ans;
    }
};