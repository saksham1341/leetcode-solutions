class Solution {
public:
    map<int , int> mem;

    int rob(vector<int>& nums, int ind = 0) {
        if (ind >= nums.size()) return 0;
        else if (ind == nums.size() - 1) return nums[ind];
        else if (ind == nums.size() - 2) return max(nums[ind], nums[ind + 1]);
        else if (mem.find(ind) == mem.end())
            mem[ind] = max(
                nums[ind] + rob(nums, ind + 2),
                nums[ind + 1] + rob(nums, ind + 3)
            );

        return mem[ind];
    }
};
