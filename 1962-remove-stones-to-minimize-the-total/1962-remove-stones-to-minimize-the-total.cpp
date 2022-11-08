class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(),piles.end());
                
        while(k>0){
            pq.push(pq.top()-floor(pq.top()/2));
            pq.pop();
            k--;
        }
        
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            //cout<<pq.top()<<" ";
            pq.pop();
        }
        
        return sum;
    }
};