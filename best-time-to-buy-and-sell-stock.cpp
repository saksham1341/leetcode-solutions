class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost = INT_MAX, maxCost = INT_MIN, res = INT_MIN;

        for (auto i: prices)
        {
            if (i < minCost)
                minCost = i;
            
            if (i - minCost > res)
                res = (i - minCost);
        }

        return res;
    }
};
