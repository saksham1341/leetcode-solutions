class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        int j = 0;

        while (j < n)
        {
            if (nums[j] == val)
                j++;
            else
                nums[i++] = nums[j++];
        }

        return i;
    }
};
