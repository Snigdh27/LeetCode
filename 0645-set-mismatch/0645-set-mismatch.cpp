class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            s.insert(nums[i]);
        }
        
        vector<int>ans(2);
        
        for(auto x:mp){
            if(x.second==2){
                ans[0]=x.first;
            }
        }
        //vector<int>res;
        int sum=0;
        for(auto x:s){
            sum+=x;
        }
        
        int n=nums.size();
        n=n*(n+1)/2;
        
        ans[1]=n-sum;
        
        return ans;
    }
};