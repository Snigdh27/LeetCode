class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>res;
        
        for(int i=0;i<arr.size();i++){
            res.push_back({__builtin_popcount(arr[i]),arr[i]});
        }
        
        vector<int>ans;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            ans.push_back(res[i].second);
        }
        
        return ans;
    }
};