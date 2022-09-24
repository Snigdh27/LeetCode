class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        int maxNum=INT_MIN,ans=-1;
        
        for(auto x:mp){
            if(x.first%2==0 && x.second>maxNum){
                ans=x.first;
                maxNum=x.second;
            }
            
        }
        
        return ans;
    }
};