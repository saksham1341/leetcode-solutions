class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> temp(nums.begin(), nums.begin() + n - k);
        nums.erase(nums.begin(), nums.begin() + n - k);
        nums.insert(nums.end(), temp.begin(), temp.end());

        return;
    }
};
