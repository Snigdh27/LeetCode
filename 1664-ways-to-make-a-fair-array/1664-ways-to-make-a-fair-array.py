class Solution:
    def waysToMakeFair(self, nums: List[int]) -> int:
        evenSum=0
        oddSum=0
        for i in range(0,len(nums)):
            if i%2==0:
                evenSum+=nums[i]
            else:
                oddSum+=nums[i]
        
        tempEven=0
        tempOdd=0
        count=0
        for i in range(0,len(nums)):
            if i%2==0:
                evenSum-=nums[i]
            else:
                oddSum-=nums[i]
            
            if evenSum+tempOdd==oddSum+tempEven : 
                count+=1
            
            if i%2==0:
                tempEven+=nums[i]
            else:
                tempOdd+=nums[i]
                
        return count       