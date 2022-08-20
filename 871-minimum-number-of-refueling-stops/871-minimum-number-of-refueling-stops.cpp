class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        
        int result=0;
        int fuel=startFuel;
        int i=0;
        priority_queue<int>pq;
        
        while(fuel<target){
            while(i<n && fuel>=stations[i][0]){
                pq.push(stations[i][1]);
                i++;
        }
            if(pq.empty()){
                return -1;
            }
            
            int distance=pq.top();
            pq.pop();
            fuel+=distance;
            
            result++;
        }
        
        return result;
    }
};