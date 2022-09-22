class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int evenSum=0,oddSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                evenSum+=nums[i];
            }
            else{
                oddSum+=nums[i];
            }            
        }
        
        int tempEven=0,tempOdd=0,count=0;
        
        for(int i=0;i<n;i++){
            
            
            if(i%2==0){
                evenSum-=nums[i];
            }
            else{
                oddSum-=nums[i];
            }
            
            //cout<<tempEven<<" "<<tempOdd<<endl;
            if(oddSum+tempEven==tempOdd+evenSum){
                count++;
            }
            
            if(i%2==0){
                tempEven+=nums[i];
            }
            else{
                tempOdd+=nums[i];
            }
            
            
        }
        
        return count;
        
    }
};