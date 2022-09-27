class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        int temp=-1;
        for(auto x:mp){
            if(x.first==x.second){
                temp=x.first;
            }
        }
        
        return temp;
    }
};