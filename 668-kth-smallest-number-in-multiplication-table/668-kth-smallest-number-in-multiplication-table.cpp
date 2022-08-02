class Solution {
public:
    
    bool kthSmallest(int m,int n,int num,int k){
        int c=0;
        for(int i=1;i<=m;i++){
            c+=min(num/i,n);
        }
        return c>=k;
    }
    
    int findKthNumber(int m, int n, int k) {
        int low=1,high=m*n;
        while(low<high){
            int mid=(low+high)/2;
            if(kthSmallest(m,n,mid,k)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        
        return low;
    }
};