class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        ans=[]
        sum=0
        for i in range(0,len(nums)):
            if nums[i]%2==0:
                sum=sum+nums[i]
            
        for i in range(0,len(queries)):
            index=queries[i][1]
            value=queries[i][0]
            
            if nums[index]%2==0:
                sum=sum-nums[index]
            nums[index]=nums[index]+value
            
            if nums[index]%2==0:
                sum=sum+nums[index]
                
            ans.append(sum)
            
        return ans   