class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = INT_MIN;

        for (auto i: candies)
            if (i > max_candies) max_candies = i;
        
        vector<bool> res;
        for (auto i: candies)
            res.push_back(i + extraCandies >= max_candies);
        
        return res;
    }
};
