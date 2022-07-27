class Solution
{
    public:
        vector<int> sumZero(int n)
        {
            vector<int> ans;

            if (n % 2 != 0)
            {
                ans.push_back(0);
                int i = 0;
                while (ans.size() < n)
                {
                    ans.push_back(i + 1);
                    ans.push_back(0 - i - 1);
                    i++;
                }
            }

            else if (n % 2 == 0)
            {
                int i = 0;
                while (ans.size() < n)
                {
                    ans.push_back(i + 1);
                    ans.push_back(0 - i - 1);
                    i++;
                }
            }
            return ans;
        }
};