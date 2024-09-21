class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int flag = 1;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] != nums[j])
            {
                nums[++j] = nums[i];
                flag = 1;
            }
            else if (flag == 1)
            {
                nums[++j] = nums[i];
                flag = 2;
            }
            else continue;
        }

        return j + 1;
    }
};
