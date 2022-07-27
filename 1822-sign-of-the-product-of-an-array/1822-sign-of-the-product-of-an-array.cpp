class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0,negativeNum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            if(nums[i]<0){
                negativeNum++;
            }
        }
        
        if(count>0){
            return 0;
        }
        else{
         if(negativeNum%2==0){
             return 1;
         }   
            return -1;
        }
        return 0;
    }
};