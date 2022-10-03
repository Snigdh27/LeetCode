class Solution {
public:
    bool equalFrequency(string word) {
        map<char,int>mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        if(mp.size()==1)
            return true;
        int count1=0,count2=0,count3=0;
        int temp=mp[word[0]],temp2;
        for(auto x:mp){
            if(x.second==temp){
                count1++;//count1=1
            }
            else{
                count2++;//count2=2
                if(count2==1)temp2=x.second;
                else
                {
                    if(temp2!=x.second)
                        count3=1;
                }
            }
        }
        if(count3==1)
            return false;
        int t,t1;
        if(count2>count1)
        {
         t=count1;
         t1=temp;
         count1=count2;
         temp=temp2;
         count2=t;
         temp2=t1;
        }
        
        if(count2>1){
            
            return false;
        }
        else if(count2==0 && temp==1){
            return true;
        }
        else if(count2==1 && abs(temp2-temp)==1){
            return true;
        }
        cout<<temp<<endl<<count2<<endl;
        return false;
    }
};