class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size(),m=colSum.size();
        
        vector<vector<int>>ans(n,vector<int>(m));
        
        unordered_set<int>rset,cset;
        
        while(rset.size()!=n && cset.size()!=m){
            int r1=minVal(rowSum,rset);
            int c1=minVal(colSum,cset);
            if(rowSum[r1]<colSum[c1]){
                ans[r1][c1]=rowSum[r1];
                colSum[c1]-=rowSum[r1];
                rset.insert(r1);
            }
            else{
                ans[r1][c1]=colSum[c1];
                rowSum[r1]-=colSum[c1];
                cset.insert(c1);
            }
        }
        
        return ans;
    }
    
    int minVal(vector<int>a,unordered_set<int>s){
        int minans=INT_MAX;
        int idx=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<minans && s.find(i)==s.end()){
                minans=a[i];
                idx=i;
            }
        }
        return idx;
    }
};