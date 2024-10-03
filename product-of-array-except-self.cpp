class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count = 0;
        int prod_without_zero = 1;
        for (auto n: nums)
        {
            if (n == 0)
                zero_count++;
            else prod_without_zero *= n;
        }

        if (zero_count > 1)
            return vector<int> (nums.size(), 0);
        
        vector<int> res;
        if (zero_count)
        {
            for (auto n: nums)
                res.push_back(n == 0 ? prod_without_zero : 0);
        }
        else
        {
            for (auto n: nums)
                res.push_back(prod_without_zero / n);
        }

        return res;
    }
};
