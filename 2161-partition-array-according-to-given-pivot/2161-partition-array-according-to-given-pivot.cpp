class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                count++;
            }
        }
        
        vector<int>smaller,larger;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                smaller.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                larger.push_back(nums[i]);
            }
        }
        
        vector<int>ans;
       // sort(larger.begin(),larger.end());
        //sort(smaller.begin(),smaller.end(),greater<int>());
        for(int i=0;i<smaller.size();i++){
            ans.push_back(smaller[i]);
        }
        for(int i=0;i<count;i++){
            ans.push_back(pivot);
        }
        for(int i=0;i<larger.size();i++){
            ans.push_back(larger[i]);
        }
        
        return ans;
    }
};