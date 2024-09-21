class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = nums[0];
        int count = 0;

        for (auto i: nums)
        {
            if (res == i) count++;
            else
            {
                count--;
                if (count == 0)
                {
                    res = i;
                    count = 1;
                }
            }
        }

        return res;
    }
};
