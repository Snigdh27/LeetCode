class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int res=0,n=arr.size()+1;
        vector<int>ans(n);
        //ans[0]=arr[0];
        for(int i=1;i<n;i++){
            ans[i]=arr[i-1]^ans[i-1];
        }
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ans[i]==ans[j]){
                    res+=j-i-1;
                }
            }
        }
        
        return res;
    }
};