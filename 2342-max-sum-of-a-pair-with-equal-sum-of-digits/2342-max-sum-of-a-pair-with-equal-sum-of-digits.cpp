class Solution {
public:
    
    int digitSum(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        
        return sum;
    }
    
    int maximumSum(vector<int>& nums) {
        vector<pair<int,int>>res;
        for(int i=0;i<nums.size();i++){
            res.push_back({digitSum(nums[i]),nums[i]});
        }
        
        sort(res.begin(),res.end());
        
        int ans=-1;
        
        for(int i=1;i<nums.size();i++){
            if(res[i].first==res[i-1].first){
                ans=max(ans,res[i].second+res[i-1].second);
            }
        }
        
        return ans;
    }
};