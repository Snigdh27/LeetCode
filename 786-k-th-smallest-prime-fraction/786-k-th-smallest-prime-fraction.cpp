class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>ans;
        
        vector<pair<double,pair<int,int>>>res;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                double val=(double)arr[i]/(double)arr[j];
                res.push_back({val,{arr[i],arr[j]}});                
            }
        }
        
        sort(res.begin(),res.end());
        
        ans.push_back(res[k-1].second.first);
        ans.push_back(res[k-1].second.second);
        return ans;
    }
};