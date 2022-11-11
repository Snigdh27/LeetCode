class Solution {
public:
    
    int findGCD(vector<int>&arr)
{
        int n=arr.size();
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
    
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        int val=findGCD(numsDivide);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(val%nums[i]==0){
                return i;
            }
        }
        
        return -1;
    }
};