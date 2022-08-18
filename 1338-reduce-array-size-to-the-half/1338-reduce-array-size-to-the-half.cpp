#include<bits/stdc++.h>

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        priority_queue<int>pq;
        
        int result=0,reduce=0;
        
        for(auto x:mp){
            pq.push(x.second);
        }
        
        while(reduce<n/2){
            reduce+=pq.top();
            pq.pop();
            result++;
        }
        
        
        return result;
    }
};