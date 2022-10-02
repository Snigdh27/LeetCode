class Solution:
    def maxSum(self, grid: List[List[int]]) -> int:
        n=len(grid)
        m=len(grid[0])
        res=-1
        for i in range(0,n-2):
            for j in range(0,m-2):
                grid_sum=grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]
                res=max(res,grid_sum)
         
        return res