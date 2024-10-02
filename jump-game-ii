class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> minJumps(n, 0);

        int head = 0;
        for (int i = 0; i < n; i++)
        {
            int j = head + 1;
            for (j; j <= i + nums[i] && j < n; j++)
                minJumps[j] = minJumps[i] + 1;
            head = j - 1;
        }

        return minJumps[n - 1];
    }
};
