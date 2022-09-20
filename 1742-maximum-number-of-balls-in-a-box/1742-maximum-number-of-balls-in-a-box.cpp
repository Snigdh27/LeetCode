class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int>ball(46,0);
        
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0,temp=i;
            while(temp){
                sum=sum+temp%10;
                temp=temp/10;
            }
            ball[sum]++;
        }
        
        return *max_element(ball.begin(),ball.end());
    }
};