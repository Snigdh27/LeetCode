class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        int minDiff=INT_MAX;
        
        for(int i=1;i<arr.size();i++){
            minDiff=min(minDiff,arr[i]-arr[i-1]);
        }
        
       // cout<<minDiff<<endl;
        
        vector<vector<int>>ans;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==minDiff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        
        return ans;
    }
};