class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        map<float, int> mp;

        int res = 1;
        for (auto x: nums)
        {
            float y = (float) x;
            if (mp.find(sqrt(y)) == mp.end())
                mp[y] = 1;
            else
            {
                mp[y] = mp[sqrt(y)] + 1;
                if (mp[y] > res) res = mp[y];
            }
        }

        return res == 1 ? -1 : res;
    }
};
