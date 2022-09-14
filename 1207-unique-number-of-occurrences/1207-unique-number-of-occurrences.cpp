class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>v1,v2;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            v1.insert(arr[i]);
        }
        
        for(auto x:mp){
            v2.insert(x.second);
        }
        
        return v1.size()==v2.size()?true:false;
        
    }
};