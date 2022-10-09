class Solution:
    def hardestWorker(self, n: int, logs: List[List[int]]) -> int:
        id=logs[0][0]
        max_val=logs[0][1]
        
        for i in range(1,len(logs)):
            if (logs[i][1]-logs[i-1][1])>max_val:
                max_val=logs[i][1]-logs[i-1][1]
                id=logs[i][0]
            elif (logs[i][1]-logs[i-1][1])==max_val:
                max_val=logs[i][1]-logs[i-1][1]
                id=min(id,logs[i][0])
        return id