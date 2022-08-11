class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        vector<int>res;
        
        int n=nums.size();
        
        for(auto x:mp){
            if(x.second>n/3){
                res.push_back(x.first);
            }
        }
        
        return res;
    }
};