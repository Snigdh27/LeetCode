class Solution
{
    public:
        string kthDistinct(vector<string> &arr, int k)
        {
            unordered_map<string, int> mp;
            vector<string>ans;
            
            for (int i = 0; i < arr.size(); i++)
            {
                mp[arr[i]]++;
            }

            for (auto x: arr)
            {
                if (mp[x] == 1)
                {
                    ans.push_back(x);
                }
            }
            
            if(ans.size()<k){
                return "";
            }
            return ans[k-1];
            
        }
};