class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0),right(n,0),ans(n);
        
        for(int i=1;i<n;i++){
            left[i]=left[i-1]+(nums[i]-nums[i-1])*i;
        }
        
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]+(nums[i+1]-nums[i])*(n-i-1);
        }
        
        for(int i=0;i<n;i++){
            ans[i]=left[i]+right[i];
        }
        
        return ans;
    }
};