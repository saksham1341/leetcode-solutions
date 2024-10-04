class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int slow = 0;
        int fast;

        for (fast = 0; fast < n; fast++)
        {
            if (nums[fast] == 0) continue;
            else nums[slow++] = nums[fast];
        }

        while (slow < n)
            nums[slow++] = 0;
        
        return;
    }
};
