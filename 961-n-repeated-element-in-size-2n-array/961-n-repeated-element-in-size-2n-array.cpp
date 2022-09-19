class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x:mp){
            if(x.second==n){
                return x.first;
            }
        }
        
        return -1;
            
    }
};