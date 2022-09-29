class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max=0,mask=0;
        for(int i=31;i>=0;i--){
            mask=mask|(1<<i);
            unordered_set<int>s;
            for(int i=0;i<nums.size();i++){
                s.insert(nums[i]&mask);
            }
            
            int temp=max|(1<<i);
            for(auto x:s){
                if(s.find(temp^x)!=s.end()){
                    max=temp;
                    break;
                }
            }
        }
        
        return max;
    }
};