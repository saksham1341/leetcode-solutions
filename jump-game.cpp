class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return true;

        int tar = n - 1;

        for (int i = n - 2; i >= 0; i--)
        {
            int req = tar - i;
            if (nums[i] >= req)
                tar = i;
        }

        return tar == 0;
    }
};
