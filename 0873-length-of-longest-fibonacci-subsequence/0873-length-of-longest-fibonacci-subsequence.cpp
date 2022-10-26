class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int>st;
        
        for(int i=0;i<arr.size();i++)
        {
            st.insert(arr[i]);
        }
        
        int temp=0,ans=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int x=arr[i];
                int y=arr[j];
                int z=x+y;
                temp=2;
                while(st.find(z)!=st.end()){
                    temp++;
                    x=y;
                    y=z;
                    z=x+y;
                }
                ans=max(ans,temp);
            }
        }
        
        return ans>2?ans:0;
        
    }
};